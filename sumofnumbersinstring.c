#include<stdio.h>
int main()
{
    int i,sum=0;
    char str1[50];
    printf("Enter the string\n");
    gets(str1);
    puts(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if((str1[i])>='0'&&(str1[i])<='9')
        {
            sum=sum+(str1[i]-'0');
        }
    }
    printf("Sum of numbers in string %d\n",sum);
    return(0);
} 
           
    
 
    

    
              
  
    
    
     
     
   
   
      