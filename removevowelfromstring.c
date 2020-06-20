#include<stdio.h>
#include<string.h>
int vowel(char ch); 
int main()
{
    int i,j=0;
    char str1[50],str2[50];
    printf("Enter the string\n");
    gets(str1);
    puts(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(vowel(str1[i])==0)
        {
            str2[j]=str1[i];
            j++;
        }
    }
    str2[j]='\0';
    strcpy(str1,str2);
    printf("After removal of strings is %s\n",str1);
    return(0);
} 
int vowel(char ch)
{
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        return(1);
        else
        return(0);
}
           
    
 
    

    
              
  
    
    
     
     
   
   
      