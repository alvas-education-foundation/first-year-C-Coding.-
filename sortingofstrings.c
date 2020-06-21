#include<stdio.h>
#incude<string.h>
int main()
{
    int i,j,n;
    char str1[50],temp;
    printf("Enter the string\n");
    gets(str1);
    puts(str1);
    n=strlen(str1);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if((str1[i])>(str1[j]))
        {
            temp=str1[i];
            str1[i]=str1[j];
            str1[j]=temp;
        }
        }
    }
    printf("The sorted string is %s\n",str1);
    return(0);
} 
           
    
 
    

    
              
  
    
    
     
     
   
   
      