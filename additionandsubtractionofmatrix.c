#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],i,j,m,n,sum[20][20],diff[20][20];
    printf("Enter the number of rows and columns of matrices\n");
    scanf("%d%d",&m,&n);
    printf("%d\t%d\n",m,n);
    printf("Enter the elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        printf("%d\t",a[i][j]);
        }
    }
    printf("\nEnter the elemnts of second matrix\n");
    for(i=0;i<m;i++) 
    {  
        for(j=0;j<n;j++)
        {
        scanf("%d",&b[i][j]);
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }    
        printf("\nThe sum of matrices is\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
        printf("\nThe difference of matrices is\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                diff[i][j]=a[i][j]-b[i][j];
                printf("%d\t",diff[i][j]);
            }
            printf("\n");
        }        
     return(0);
}
    
              
  
    
    
     
     
   
   
      