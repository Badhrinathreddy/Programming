#include <stdio.h>
#include <string.h>
int main()
{
  char str[200];
  int count=0,i;

   printf("Checking no of words");
   gets(str); 
   for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!=' '){
            count++;
       }   
}
     printf("Number of words %d",count+1);
     return(0);
}