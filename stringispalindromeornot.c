#include<stdio.h>
void main()
{
    char s1[20]="mom";
    char s2[20]; 
    int l1=0,i,temp;
    for(i=0;s1[i]!='\0';i++)
    {   
        l1++;
    } 
    printf("length of string is %d\n",l1); 
    for(i=0;s1[i]!='\0';i++) 
    {  
        s2[i]=s1[l1-i-1]; 
    } 
    printf("the reversed string is %s\n",s2); 
    for(i=0;s1[i]!='\0';i++) 
    { 
        if(s1[i]==s2[i])
         
           temp=0; 
           else 
           temp=1; 
    }  
           if(temp==0)
    printf("string is palindrome "); 
            else 
    printf("string is not palindrome");
} 
           
    
 
    

    
              
  
    
    
     
     
   
   
      