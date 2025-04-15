#include <stdio.h>
void convertUpper(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
int main() {
    char s[121];
    printf("Enter a string: ");
    scanf("%s", s);
    convertUpper(s);
    printf("After conversion: %s\n", s);
    return 0;
}