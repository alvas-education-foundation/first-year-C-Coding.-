#include<stdio.h>
int main()
{
    int a[20][20],i,j,m,n,rsum[20],csum[20];
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
    }
        for(i=0;i<m;i++)
        {   
            rsum[i]=0;
            for(j=0;j<n;j++)
            {
                rsum[i]=rsum[i]+a[i][j];
            }
                printf("The sum of %d row is %d",i+1,rsum[i]);
            printf("\n");
        }
        for(i=0;i<n;i++)
        {   csum[i]=0;
            for(j=0;j<m;j++)
            {
                csum[i]=csum[i]+a[i][j];
            }
            printf("The sum of %d column is %d",i+1,csum[i]);
            printf("\n");
        }        
     return(0);
}
    
              
  
    
    
     
     
   
   
      