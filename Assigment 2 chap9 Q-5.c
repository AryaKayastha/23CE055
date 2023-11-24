//This program is created by Kayastha Arya_23CE055
#include <stdio.h>

// Function to delete a character from a string
void deleteCharacter(char str[], char chToDelete) {
    int i, j;
// Iterate through each character in the string
    for (i = 0, j = 0; str[i] != '\0'; ++i) {
        // If the character is not the one to be deleted
        if (str[i] != chToDelete) {
            // Copy the character to the modified string
            str[j++] = str[i];
        }
    }
    // Null-terminate the modified string
    str[j] = '\0';
}

int main() {
    char input[100], chToDelete;
    // Input a string from the user
    printf("Enter a string: ");
    gets(input);
    // Input the character to delete from the string
    printf("Enter the character to delete: ");
    scanf(" %c", &chToDelete);

    // Call the function to delete the character
    deleteCharacter(input, chToDelete);

    // Display the modified string
    printf("String after deleting '%c': %s\n", chToDelete, input);
    printf("\nThis program is created by Kayastha Arya_23CE055");
    return 0;
}

