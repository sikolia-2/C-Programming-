#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputString[100];

    // Accept a string input from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Display the length of the string
    int length = strlen(inputString);
    printf("Length of the string: %d\n", length);

    // Convert the string to uppercase
    for (int i = 0; inputString[i] != '\0'; i++) {
        inputString[i] = toupper(inputString[i]);
    }

    // Display the modified string
    printf("String in uppercase: %s\n", inputString);

    return 0;
}
