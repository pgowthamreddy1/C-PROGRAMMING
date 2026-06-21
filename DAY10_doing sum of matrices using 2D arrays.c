#include <stdio.h>

int main() {
    int a[2][3],b[2][3],c[2][3],i,j,sum;
printf("enter the elements of the matrix: \n");
for(j=0;j<2;j++)
{
    for(i=0;i<3;i++)
  {
    scanf("%d",&a[i][j]); 
      }    
}
printf("enter the elements of the matrix: \n");
for(j=0;j<2;j++)
{
    for(i=0;i<3;i++)
  {
    scanf("%d",&b[i][j]); 
      }    
}
printf("\nthe matrix 1 is:\n");

for(j=0;j<2;j++)
{
    for(i=0;i<3;i++)
  {
    printf("%d\t\t",a[i][j]); 
      } 
printf("\n");        
}
printf("\nthe matrix 2 is: \n");

for(j=0;j<2;j++)
{
    for(i=0;i<3;i++)
  {
    printf("%d\t\t",b[i][j]); 
      } 
printf("\n");        
}

for(j=0;j<2;j++)
{
    for(i=0;i<3;i++)
  {
    c[i][j]=a[i][j]+b[i][j];
      }    
}

printf("\nthe matrix 3 is: \n");


for(j=0;j<2;j++)
{
    for(i=0;i<3;i++)
  {
    printf("%d\t\t",c[i][j]); 
      } 
printf("\n");         
}

return 0;
}
