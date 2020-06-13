#include<stdio.h>
int main()
{
    int a[20][20],i,j,m,n,transpose[20][20];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d",&m,&n);
    printf("%d\t%d\n",m,n);
    printf("Enter the elements of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix is\n");
        for(i=0;i<n;i++)
        {   
            for(j=0;j<m;j++)
            {
                transpose[i][j]=a[j][i];
                printf("%d\t",transpose[i][j]);
            }
                printf("\n");
        }
     return(0);
}
    
              
  
    
    
     
     
   
   
      