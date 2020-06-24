#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j;
    char str1[50];
    printf("Enter the string\n");
    gets(str1);
    puts(str1);
    n=strlen(str1);
    for(i=0;i<n;i++)
    {
        if(str1[i]==' ')
        {
            for(j=i;j<n;j++)
            {
                str1[j]=str1[j+1];
            }
        n--;
        }
    }
    printf("String after removal of spaces is %s\n",str1);
    return(0);
} 
           
    
 
    

    
              
  
    
    
     
     
   
   
      