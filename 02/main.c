#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLower(char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        string[i] = tolower(string[i]);
    }
}

void clearString(char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ' ') string[i] = ';';

        if (string[i] == ';' || string[i] == '!' || string[i] == '\"' || string[i] == '\'' || string[i] == ',' || string[i] == '('
            || string[i] == ')' || string[i] == '[' || string[i] == ']' || string[i] == '{' || string[i] == '}' || string[i] == ':'
            || string[i] == '-' || string[i] == '?' || string[i] == '.') {
                memmove(&string[i], &string[i + 1], strlen(string) - i);
                i--;
        }
    }
}

int isPalindrome(char string[]) {
    toLower(string);
    clearString(string);

    if (string[0] == '\0' && strlen(string) == 0) return 0;

    for (int i = 0; i < strlen(string); i++) {
        if (string[i] != string[(strlen(string) - i) - 1]) return 0;
    }

    return 1;
}

int main() {
    char string[] = "";

    int result = isPalindrome(string);
    printf("Result: %s\n", result == 1 ? "true" : "false");

    return 0;
}