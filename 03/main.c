#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int include(char *string, char element) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == element) return 1;
    }

    return 0;
}

char *concatenate(char *string, char element) {
    char *newString = malloc(sizeof(char) * strlen(string) + sizeof(char));
    if (newString == NULL) return NULL;

    strcpy(newString, string);
    strcat(newString, &element);

    return newString;
}

int LCSLength(char *string1, char *string2) {
    if (string1 == string2) return strlen(string1);

    char *largestString = strlen(string1) >= strlen(string2) ? string1 : string2;
    char *smallestString = strlen(string1) < strlen(string2) ? string1 : string2;

    if (strlen(string1) == strlen(string2)) {
        largestString = string1;
        smallestString = string2;
    }

    char *commonElements = "";

    for (int i = 0; i < strlen(largestString); i++) {
        for (int j = 0; j < strlen(smallestString); j++) {
            if (largestString[i] == smallestString[j] && !include(commonElements, largestString[i])) commonElements = concatenate(commonElements, ((char)largestString[i]));
        }
    }

    int result = strlen(commonElements);
    
    if (strlen(commonElements) != 0) free(commonElements);
    return result;
}

int main() {
    int result = LCSLength("", "");
    printf("Result: %d\n", result);

    return 0;
}