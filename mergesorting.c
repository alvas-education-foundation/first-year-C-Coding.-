#include<stdio.h>
int main()
{
    int i,j,n,temp,a[20];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i;
    while(j>=1&&a[j]<a[j-1])
    {
        if(a[j]<a[j-1])
        {
           temp=a[j];
           a[j]=a[j-1];
           a[j-1]=temp;
        }
        j=i-1;
    }    
}
    printf("\nAfter merge sort the elements of array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return(0);
}
 
    

    
              
  
    
    
     
     
   
   
      