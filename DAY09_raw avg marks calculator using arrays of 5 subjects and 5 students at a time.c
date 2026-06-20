#include <stdio.h>
int  main(){
  int marks[5],sum,j,i;
  float avg; 
     

for(j=1;j<6;j++)
{  sum=0;

    printf("\n--- Subject %d ---\n", j);
   
   printf("give the all raw marks of the 5 students of each subject : \n");
   for(i=0;i<5;i++)
    {
      scanf("%d",&marks[i]);      
       sum=sum+marks[i];
                        
    }
          
     avg=(float)sum/5;     
    printf("the avg marks of this subject %d is : %.2f\n\n",j,avg);
}
       
  return 0;          
                                      }                      




