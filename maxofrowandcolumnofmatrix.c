#include<stdio.h>
int main()
{
    int a[20][20],i,j,m,n,max;
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
        for(i=0;i<m;i++)
        {    
            max=0;
            for(j=0;j<n;j++)
            {
            if(a[i][j]>=max)
            {
                max=a[i][j];
            }
            }
                printf("The maximum element in %d row is %d",i+1,max);
                printf("\n");
        }
        for(i=0;i<m;i++)
        {
            max=0;
            for(j=0;j<n;j++)
            {
                if(a[j][i]>=max)
                {
                    max=a[j][i];
                }
            }
               printf("The maximum element in %d column is %d",i+1,max);
               printf("\n");
        }
               return(0);
}
    
              
  
    
    
     
     
   
   
      