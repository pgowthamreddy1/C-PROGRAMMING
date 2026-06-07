
#include <stdio.h>
int main(){
int a;
printf("enter a integer : ");
scanf("%d",&a);
if(a >0)
     printf(" given number is positive");
else
        { if(a<0)
             {printf("given number is negative");
                }
             else
                   printf("given number is zero");
           }
return 0;
}
