#include<stdio.h> 
struct add 
{ 
    int a; 
    int b; 
}; 
void add(struct add s1);
int main()
{
 struct add s1; 
     printf("Enter the two numbers\n");
     scanf("%d%d",&s1.a,&s1.b); 
     printf("%d\t%d\t",s1.a,s1.b); 
     add(s1);
     return(0);
 }
void add(struct add s1)
{ 
    int c; 
    c=s1.a+s1.b;
    printf("\nSum of two number is %d\n",c);
}


           
    
 
    

    
              
  
    
    
     
     
   
   
      