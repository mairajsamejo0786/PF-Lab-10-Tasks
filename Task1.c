#include <stdio.h>
#include <string.h>

int main() {
    char name[100], copy[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Length: %d\n", strlen(name));

    strcpy(copy, name);
    printf("Copy: %s\n", copy);

    printf("sizeof(name): %d\n", sizeof(name));
    printf("strlen(name): %d\n", strlen(name));

    return 0;
}