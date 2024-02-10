#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void toLower(char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        string[i] = tolower(string[i]);
    }
}

int isAnagram(char string1[], char string2[]) {
    toLower(string1);
    toLower(string2);
    
    char *longestString = strlen(string1) >= strlen(string2) ? string1 : string2;
    char *shortestString = strlen(string1) < strlen(string2) ? string1 : string2;

    for (int i = 0; i < strlen(longestString); i++) {
        if (strchr(shortestString, longestString[i]) == NULL && longestString[i] != *" ") return 0;
    }

    return 1;
}

int main() {
    char string1[] = "hello";
    char string2[] = "helol";

    int result = isAnagram(string1, string2);
    printf("Result: %s\n", result == 1 ? "true" : "false");

    return 0;
}