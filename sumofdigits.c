#include<stdio.h>
void main()
{
   int n,i,sum=0;
   printf("Enter the digit: ");
   scanf("%d",&n);
   printf("%d\n",n);
   while(n>0)
   {
       i=n%10;
       sum=sum+i;
       n=n/10;
   }
  printf("Sum of digit: %d ",sum);     
}
  
 
   
   
       
          
   
   

  
         
     
     
   
   
      