#include <stdio.h>
#include <conio.h>
int main(){
int marks;
  printf("enter marks obtained : \n");
scanf("%d",&marks);
switch(marks)
{case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
        printf("your marks is %d\npass\ngrade:C",marks);
         break;
case 11:
case 12:
case 13:
case 14:
case 15:
       printf("your marks is %d\npass\ngrade: B",marks);
       break;
case 16:
case 17:
case 18:
case 19:
case 20:
       printf("your marks is %d\npass\ngrade: A",marks);
       break;       
default :
        printf("failed");
}        
           

return 0;
  }
