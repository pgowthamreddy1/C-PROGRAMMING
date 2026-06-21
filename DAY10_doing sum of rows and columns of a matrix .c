#include <stdio.h>

int main() {
    int a[3][3],i,j,sumrow,sumcol;
printf("enter the elements of the matrix: \n");
for(j=0;j<3;j++)
{
    for(i=0;i<3;i++)
  {
    scanf("%d",&a[i][j]); 
      }    
}
printf("\nyour matrix is: \n");

for(j=0;j<3;j++)
{
    for(i=0;i<3;i++)
  {
    printf("%d\t\t",a[i][j]); 
      }  
printf("\n");       
}
for(j=0;j<3;j++)
{
    for(i=0;i<3;i++)
  {
       
    sumrow=sumrow+a[i][j];
    sumcol=sumcol+a[j][i];         
      }
          
  printf("\n the sum of the row  is: %d",sumrow);
  printf("\n the sum of the column is: %d",sumcol);
sumrow=sumcol=0;
}

return 0;
}
