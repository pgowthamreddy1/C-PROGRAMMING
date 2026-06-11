#include <stdio.h>
#include <conio.h>
int main(){
int a;

printf("enter a five digit number: ");
scanf("%d",&a);

int b=a%10;
int c=a/10;
int d=c%10;
int e=c/10;
int f=e%10;
int g=e/10;  
int h=g%10;
int j=g/10;
int sum=b+d+f+h+j;
printf("the sum of the digits of the given number is: %d",sum);
return 0;
}
