#include <stdio.h>
#include <string.h>
void main()
{
    char str1[10], str2[10];
    puts("Enter a string max 9 characters:");
    gets(str1);
    if(strlen(str1) < sizeof(str2))  
    {
        strcpy(str2, str1);
        puts("Copied string is:");
        puts(str2);
    }
    else
    {
        puts("Error: ");
    }
}
