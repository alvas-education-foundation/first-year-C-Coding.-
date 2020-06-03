#include<stdio.h>
void main()
{
   int a,b,c,d,temp,hcf,lcm;
   printf("Enter two integers\n ");
   scanf("%d%d",&c,&d);
   printf("%d %d\n",c,d);
   a=c;
   b=d; 
   while(b!=0)
   {
       temp=b; 
       b=a%b;
       a=temp;
   } 
   hcf=a;
   lcm=(c*d)/hcf;
   printf("hcf %d and %d= %d\n",c,d,hcf);
   printf("Lcm of %d and %d= %d\n",c,d,lcm);
}    
       
   
      

  
 
   
   
       
          
   
   

  
         
     
     
   
   
      