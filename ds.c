#include<stdio.h>
#include<stdlib.h>

int main() {
    char *str;
    int length;   
    printf("Enter length of string: ");
    scanf("%d", &length);
 
    str = (char*)malloc(length * sizeof(char));   
    if(str == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }    
    printf("Enter the string: ");
    scanf("%s", str);   
    printf("You entered: %s\n", str);
    free(str);   
    return 0;
}
