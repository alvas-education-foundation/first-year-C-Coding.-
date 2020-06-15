#include<stdio.h>
int main()
{
    int i,j,row,m;
    printf("Enter the number of rows to print the pryamid\n");
    scanf("%d",&row);
    printf("%d\n",row);
    printf("The pryamid structure for the given number of rows is\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
        printf(" ");
        }
        for(m=0;m!=2*i-1;m++)
        {
            printf("*");
        }
        m=0;
        printf("\n");
    }
        return(0);
}
    
              
  
    
    
     
     
   
   
      