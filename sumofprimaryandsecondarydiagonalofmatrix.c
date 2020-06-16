#include<stdio.h>
int main()
{
    int a[20][20],i,j,psum=0,m,n,ssum=0;
    printf("Enter the number of rows and columns in matrix\n");
    scanf("%d%d",&m,&n);
    printf("%d %d\n",m,n);
    printf("Enter the elemnts of matrix\n");
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
        for(j=0;j<n;j++)
        {
            if(i==j)
            psum=psum+a[i][j];
        }
    }
    printf("Sum of all elements of principal diagonal is %d\n",psum);
    i=0;
    for(j=n-1;j>=0;j--)
    {
            ssum=ssum+a[i][j];
            i++;
    }
    printf("Sum of all elements of secondary diagonal is %d\n",ssum);
        return(0);
}
    
              
  
    
    
     
     
   
   
      