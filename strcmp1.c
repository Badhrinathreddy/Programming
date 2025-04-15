#include <stdio.h>
#include <string.h>
void main()
{
    char name1[20], name2[20];
    printf("Enter first name: ");
    scanf("%s", name1);
    printf("Enter second name: ");
    scanf("%s", name2);

    if(strcmp(name1, name2) == 0)
        printf("Names matched\n");
    else
        printf("Names not match\n");
}
