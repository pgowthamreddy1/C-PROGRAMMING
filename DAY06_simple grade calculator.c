#include <stdio.h>
#include <conio.h>
int main(){
int marks;
int a,b,c,d;

printf("enter maths marks: ");  
scanf("%d",&a);
printf("\nenter english marks: ");
scanf("%d",&b);
printf("\nenter social marks: ");
scanf("%d",&c);
printf("\nenter science marks: ");
scanf("%d",&d);

int SUM=a+b+c+d;
switch(SUM)
{case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
        printf(" your total marks  out of 20 is %d\npass\ngrade:C",SUM);
         break;
case 11:
case 12:
case 13:
case 14:
case 15:
       printf("\nyour total marks out of 20 is %d\npass\ngrade: B",SUM);
       break;
case 16:
case 17:
case 18:
case 19:
case 20:
       printf("\nyour  total marks out of 20 is %d\npass\ngrade: A",SUM);
       break;       
default :
        printf("\nyour total marks out of 20 is %d\nfailed",SUM);
}        
          

return 0;
  }
