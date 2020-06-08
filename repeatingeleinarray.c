#include<stdio.h>
int main()
{
    int a[20],j,i,n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\t",a[i]);
    }
    printf("\nThe repeating elements are\n")
    for(i=0;i<n;i++)
    {  
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
              {
                  printf("%d\t",a[j]);
              } 
        } 
    }        
    return(0);     
}   
    
    
     
     
   
   
      