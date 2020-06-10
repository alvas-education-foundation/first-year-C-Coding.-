#include<stdio.h>
int main()
{
    int a[20],i,n,sum=0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\t",a[i]);
    }
    printf("\nSquare of the elements of array \n");
    for(i=0;i<n;i++) 
    {
        printf("%d\t",a[i]*a[i]); 
        sum=sum+pow(a[i],2);
    }
        printf("\nThe sum of square of elements of array is %d\n",sum);
    return(0);
}
    
              
  
    
    
     
     
   
   
      