#include <stdio.h>
int main() {
    char *names[] = {"Badhrinath","Anil","jayant","piyush","Diwakar"};
    int i;
    printf("List of names:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
