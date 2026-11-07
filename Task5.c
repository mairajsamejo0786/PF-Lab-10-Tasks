#include <stdio.h>
#include <string.h>

int main() {
    char cities[5][50];
    int i, longest = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter city %d: ", i + 1);
        fgets(cities[i], sizeof(cities[i]), stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';
    }

    printf("\nCities:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", cities[i]);
        if (strlen(cities[i]) > strlen(cities[longest]))
            longest = i;
    }

    printf("\nLongest city name: %s\n", cities[longest]);
    printf("Length: %d\n", strlen(cities[longest]));

    return 0;
}