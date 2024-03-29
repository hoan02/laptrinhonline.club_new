from unidecode import unidecode
from selenium import webdriver
from time import sleep
from selenium.webdriver.common.keys import Keys

# Khai bao bien browser
driver = webdriver.Chrome(executable_path="./chromedriver.exe")
Problems = []


class Problem:
    def __init__(self, name, path, code):
        self.name = name
        self.path = path
        self.code = code
        self.name_file = unidecode(name.title()).replace(" ", "").translate({ord(c): None for c in '!@#$%^&*()_+-=[]{};:,/?|\\\"\''}) + ".cpp"


def login_laptrinhonline(username, password):
    driver.get("https://laptrinhonline.club/accounts/login/?next=/problems/")
    driver.find_element_by_id("id_username").send_keys(username)
    driver.find_element_by_id("id_password").send_keys(password)
    driver.find_element_by_id("id_password").send_keys(Keys.ENTER)


def crawl(num_solved):
    max_page = num_solved // 50
    sur = num_solved % 50
    for num_page in range(1, max_page+1):
        set_problem(num_page, 51)
    if sur != 0:
        set_problem(max_page+1, sur+1)


def get_code(path):
    driver.get(path + "/rank/?language=CPP11&language=CPP14&language=CPP17")
    id_submit = driver.find_element_by_class_name("submission-row").get_attribute('id')
    driver.get("https://laptrinhonline.club/src/" + id_submit)
    source_code = driver.find_element_by_class_name("codehilite").text
    return source_code


def set_problem(number_page, x):
    name_list = []
    path_list = []
    driver.get("https://laptrinhonline.club/problems/?order=-solved&page=" + str(number_page))
    problem_list = driver.find_elements_by_css_selector(".problem > a")[1:x]
    for pr in problem_list:
        name_list.append(pr.text)
        path_list.append(pr.get_attribute('href'))

    for num in range(0, x-1):
        name = name_list[num]
        path = path_list[num]
        code = get_code(path_list[num])
        Problems.append(Problem(name, path, code))
        print("\n\n=======================================================================\n\n")
        print(f'Bài {len(Problems)}: {name}')
        print(path)
        print(code)


def save_file(path):
    for pr in Problems:
        code = pr.code
        open(path + pr.name_file, "w").write(code)


def login_github(username_git, password_git):
    driver.get("https://github.com/login")
    driver.find_element_by_id("login_field").send_keys(username_git)
    driver.find_element_by_id("password").send_keys(password_git)
    driver.find_element_by_id("password").send_keys(Keys.ENTER)


def up_code(username_git, repo_name, path):
    for pr in Problems:
        driver.get("https://github.com/" + username_git + "/" + repo_name + "/upload")
        driver.find_element_by_xpath("//*[@id='upload-manifest-files-input']").send_keys(path + pr.name_file)
        driver.find_element_by_id("commit-summary-input").send_keys(pr.name)
        driver.find_element_by_id("commit-description-textarea").send_keys(pr.path)
        sleep(3)
        driver.find_element_by_xpath("//*[@id='repo-content-pjax-container']/div/form/button").click()


def main():
    # User + pass trên laptrinhonline
    username = "Hoan_CNTT_VA2_K61"
    password = "c49e459263eaec85707426f4012d3bd4"

    # Số bài đã giải được
    number_solved = 513

    # User + pass trên github
    username_git = "hoan02"
    password_git = "c49e459263eaec85707426f4012d3bd4"

    # Tên repository trên github
    repo_name = "laptrinhonline.club_new"

    # Đường dẫn thư mục lưu file trên PC
    path = "D:\\Git\\laptrinhonline.club_new\\"


    login_laptrinhonline(username, password)
    crawl(number_solved)
    save_file(path)
    login_github(username_git, password_git)
    up_code(username_git, repo_name, path)


if __name__ == '__main__':
    main()
