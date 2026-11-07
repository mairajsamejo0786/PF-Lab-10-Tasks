#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char *p;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    p = strchr(sentence, 'a');
    if (p != NULL)
        printf("First 'a' found at index %d\n", p - sentence);
    else
        printf("Letter 'a' not found.\n");

    if (strstr(sentence, "good") != NULL)
        printf("Word 'good' found.\n");
    else
        printf("Word 'good' not found.\n");

    return 0;
}