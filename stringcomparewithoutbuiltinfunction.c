#include<stdio.h>
void main()
{
    char str1[20],str2[20]; 
    int len1=0,len2=0,i,temp; 
    printf("enter string1\n"); 
    scanf("%s",str1); 
    printf("%s\n",str1); 
    printf("enter string2"); 
    scanf("%s",str2); 
    printf("%s\n",str2); 
    printf("length of string1 is\n");
    for(i=0;str1[i]!='\0';i++)
    {   
        len1++;
    } 
    printf("%d\n",len1);
    printf("length of string2 is \n"); 
    for(i=0;str2[i]!='\0';i++) 
    {  
        len2++; 
    } 
    printf("%d\n",len2); 
        if(len1!=len2)
        { 
            printf("strings are difft\n"); 
        }  
        else 
        { 
        for(i=0;str1[i]!='\0';i++)
        {  
           if(str1[i]==str2[i])
          { 
           temp=0; 
          }
           else 
           { 
               temp=1; 
               break; 
           } 
        }  
           if(temp==0)
    printf("string is same "); 
            else 
    printf("string is not same");
    }
} 
           
    
 
    

    
              
  
    
    
     
     
   
   
      