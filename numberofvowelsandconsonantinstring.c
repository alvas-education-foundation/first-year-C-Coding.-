#include<stdio.h>
#include<string.h>
int main()
{
    int i,vcount=0,ccount=0,acount=0,ecount=0,icount=0,ocount=0,ucount=0;
    char ch,str1[50];
    printf("Enter sentence\n");
    gets(str1);
    puts(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(isalpha(str1[i]))
        {
            ch=str1[i];
            if(ch=='a'||ch=='A')
                acount++;
           else if(ch=='e'||ch=='E')
                ecount++;
           else if(ch=='i'||ch=='I')
                icount++;
           else if(ch=='o'||ch=='O')
               ocount++;
           else if(ch=='u'||ch=='U')
               ucount++;
           else
               ccount++;
    }    
}
vcount=acount+ecount+icount+ocount+ucount;
printf("total number of vowels= %d\n",vcount);
printf("total number of a's= %d\n",acount);
printf("total number of e's= %d\n",ecount);
printf("total number of i's= %d\n",icount);
printf("total number of o's= %d\n",ocount);
printf("total number of u's= %d\n",ucount);
printf("total number of consonants= %d\n",ccount);
return(0);
}
 
    

    
              
  
    
    
     
     
   
   
      