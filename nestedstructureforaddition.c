#include<stdio.h>
struct add
{
    int a;
    int b;
};
struct add1
{
    int c;
    struct add s1;
};
int main()
{
    struct add1 s2; 
    printf("Enter the two numbers\n");
    scanf("%d%d",&s2.s1.a,&s2.s1.b);
    printf("%d\t%d\t",s2.s1.a,s2.s1.b);
    s2.c=s2.s1.a+s2.s1.b;
    printf("\nSum of two number is %d\n",s2.c);
}

           
    
 
    

    
              
  
    
    
     
     
   
   
      