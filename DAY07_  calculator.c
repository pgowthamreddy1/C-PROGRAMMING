#include <stdio.h>
#include <conio.h>
int main(){
int a,b,c; 


printf("hello!\nwelcome to my calculater!\nwhich operation do you want \nplz type the s.no below\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.remainder when first number divides the second number\n");
scanf("%d",&a);

printf("enter first number: ");
scanf("%d",&b);

printf("\nenter second number: ");
scanf("%d",&c);
int sum=b+c;
int difference=b-c;
int product=b*c;
int modulo=b%c;
int divide=b/c;

printf("\nthe given two numbers is \n1.%d\n2.%d\n",b,c);

switch(a)
 {
    case 1:
            printf("sum of the given two numbers is %d",sum);
            break;
    case 2:
           printf("difference of the given two numbers is %d",difference);
           break ;
    case 3:
           printf("the product of the given two numbers is %d",product);
           break ;
    case 4:
           printf("the division of the two numbers is %d",divide);
           break;
    case 5:
           printf("the remainder when the given two numbers divide is %d",modulo);
           break ;
    default :
               printf("you have to select only from 1 to 5");
              break ;                           }
return 0;
}           

           
                                                                                                                                                                      
