#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Point;
#define x first
#define y second

double square_distance(Point A, Point B)
{
    return (A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y);
}
Point nearest(Point A,Point B, Point M)
{
    while(fabs(A.x-B.x)>1e-4 || fabs(A.y-B.y)>1e-4)
    {
        Point C((A.x+B.x)/2,(A.y+B.y)/2);
        if(square_distance(A,M)>square_distance(B,M)) A=C;
        else B=C;
    }
    return A;
}
double area(Point A, Point B,Point C)
{
    return fabs((B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y))/2;
}
int main()
{
    cout<<setprecision(3)<<fixed;
    int test;
    cin>>test;
    while(test--)
    {

    Point A,B,C,M,D,E,F;
    cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y>>M.x>>M.y;
    if(area(A,B,C)==area(A,B,M)+area(B,C,M)+area(C,A,M)) cout<<M.x<<" "<<M.y<<"\n ";
    else
    {
        D=nearest(A,B,M);
        E=nearest(A,C,M);
        F=nearest(C,B,M);
        if(square_distance(D,M)>square_distance(E,M)) D=E;
        if(square_distance(D,M)>square_distance(F,M)) D=F;
        cout<<D.x<<" "<<D.y<<"\n";
    }
}
}