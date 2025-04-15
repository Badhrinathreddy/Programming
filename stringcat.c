#include <stdio.h>
#include <string.h>

void main()
{
    char str1[25], str2[25];

    puts("Enter string1:");
    gets(str1);

    puts("Enter string2 :");
    gets(str2);

    strcat(str1, str2);
    puts("Concatenated string:");
    puts(str1);
}
