#include <stdio.h>
#include <string.h>

void main()
{
    char str1[10], str2[10], res[20];
    puts("Enter string1:");
    gets(str1);

    puts("Enter string2:");
    gets(str2);
    strcpy(res, str1);
    strcat(res, str2);

    puts("Concatenated string is:");
    puts(res);
}
