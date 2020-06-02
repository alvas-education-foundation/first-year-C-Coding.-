#include<stdio.h>
void main()
{
   int n1,d1,n2,d2,n3,d3,i,gcd;
   printf("Enter the first fraction number: ");
   scanf("%d/%d",&n1,&d1);
   printf("%d/%d\n",n1,d1);
   printf("Enter the second fraction number: ");
   scanf("%d/%d",&n2,&d2);
   printf("%d/%d\n",n2,d2);
   n3=(n1*d2)+(n2*d1);
   d3=d1*d2;
   for(i=1;i<=n3&&i<=d3;++i)
   {  
       if(n3%i==0&&d3%i==0)
       gcd=i;
   }
  printf("The added fraction is %d/%d ", n3/gcd,d3/gcd);     
}
  
 
   
   
       
          
   
   

  
         
     
     
   
   
      