#include<stdio.h>
int main()
{
    int a[20],big,small,i,n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\t",a[i]);
    }
    big=a[0];
    small=a[0];
    for(i=0;i<n;i++) 
    {
        if(a[i]>big)
        {
            big=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("\nThe biggest element in array is %d",big);
    printf("\nThe smallest element in array is %d",small);
}     
     
     
   
   
      