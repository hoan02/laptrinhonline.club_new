#include<stdio.h>
#include<math.h>
int main () {
 int t,a;
 scanf ("%d", &t);
 for (int i=1;i<=t;i++) {
  scanf ("%d ", &a);
  if (a<1) printf ("0\n");
  if (1<=a&& a<4) printf ("%d\n", a-1); 
  else {
   if (4<=a&&a<9) printf ("%d\n", a-2);
   else {
    if (9<=a&&a<16) printf ("%d\n", a-3);
    else {
     if (16<=a&&a<25) printf ("%d\n", a-4);
     else {
      if (25<=a&&a<36) printf ("%d\n", a-5);
      else {
       if (36<=a&&a<49) printf ("%d\n", a-6);
       else {
        if (49<=a&&a<64) printf ("%d\n", a-7);
        else {
         if (64<=a&&a<81) printf ("%d\n", a-8);
         else {
          if (81<=a&&a<100) printf ("%d\n", a-9);
          else {
           if (100<=a&&a<121) printf ("%d\n", a-10);
           else {
            if (121<=a&&a<144) printf ("%d\n", a-11);
            else {
             if (144<=a&&a<169) printf ("%d\n", a-12);
             else {
              if (169<=a&&a<196) printf ("%d\n", a-13);
              else {
               if (196<=a&&a<225) printf ("%d\n", a-14);
               else {
                if (225<=a&&a<256) printf ("%d\n", a-15);
                else {
                 if (256<=a&&a<289) printf ("%d\n", a-16);
                 else {
                  if (289<=a&&a<324) printf ("%d\n", a-17);
                  else {
                   if (324<=a&&a<361) printf ("%d\n", a-18);
                   else {
                    if (361<=a&&a<400) printf ("%d\n", a-19);
                    else{
                     if (400<=a&&a<441) printf ("%d\n", a-20);
                     else {
                      if (441<=a&&a<484) printf ("%d\n", a-21);
                      else {
                       if (484<=a&&a<529) printf ("%d\n", a-22);
                       else  {
                        if (529<=a&&a<576) printf ("%d\n", a-23);
                        else {
                         if (576<=a&&a<625) printf ("%d\n", a-24);
                                           else {
                          if (625<=a&&a<676) printf ("%d\n", a-25);
                          else {
                           if (676<=a&&a<729) printf ("%d\n", a-26);
                           else {
                            if (729<=a&&a<784) printf ("%d\n", a-27);
                            else {
                             if (784<=a&&a<841) printf ("%d\n", a-28);
                             else {
                              if (841<=a&&a<900) printf ("%d\n", a-29);
                              else {
                               if (900<=a&&a<961) printf ("%d\n", a-30);
                               else {
                                if (961<=a&&a<1000) printf ("%d\n", a-31);
                               }
                              } 
                             } 
                            } 
                           } 
                          } 
                         }
                        } 
                       }
                      } 
                     } 
                    } 
                   } 
                  } 
                 } 
                } 
               } 
              } 
             } 
            } 

           } 
          } 
         } 
        } 
       } 
      } 
     }  
    } 
   } 

  } 

 }
}