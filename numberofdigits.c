#include<stdio.h>
void main()
{
   int n,num=0;
   printf("Enter the integer number: ");
   scanf("%d",&n);
   printf("%d\n",n);
   while(n!=0)
   {
       n=n/10; 
       ++num;
   }
  printf("Number of digit: %d ",num);     
}
  
 
   
   
       
          
   
   

  
         
     
     
   
   
      