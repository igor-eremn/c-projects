#include <stdio.h>
#include <string.h>

int main() {
    printf("Hello, World!\n");

    char name[30];
    printf("Type your name: \n");
    scanf("%s", name);
    printf("Hello, %s \n", name);

    getchar();

    char fullName[30];
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    fullName[strcspn(fullName, "\n")] = 0;

    printf("Hello, %s! \n", fullName);
    return 0;
}