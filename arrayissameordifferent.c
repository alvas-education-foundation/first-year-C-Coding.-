#include<stdio.h>
int main()
{
    int a[20],b[20],i,n1,n2,temp;
    printf("Enter size of first array\n");
    scanf("%d",&n1);
    printf("%d\n",n1);
    printf("Enter the elements of first array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\t",a[i]);
    }
    printf("\nEnter size of second array\n");
    scanf("%d",&n2);
    printf("%d\n",n2);
    printf("Enter elements of second array \n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        printf("%d\t",b[i]);
    }
    if(n1!=n2)
    {
        printf("\nThe two arrays are different\n");
    }
    else
    {
    for(i=0;i<n1;i++)
    {
        if(a[i]!=b[i])
        {
            temp=0;
            break;
        }  
        else
        {
            temp=1;
        }
    } 
    if(temp==0)
    {
        printf("\nThe two arrays are different");
    }
    else
    {
        printf("\nThe two arrays are same");
    }
    }
}
    
              
  
    
    
     
     
   
   
      