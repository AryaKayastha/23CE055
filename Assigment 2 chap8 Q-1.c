//This program is created by Kayastha Arya_23CE055
#include <stdio.h>

int main()
{
    char input[100];

    // Input a string from the user
    printf("Enter a string: ");
    gets(input);

    // Iterate through each character and convert case
    for (int i = 0; input[i] != '\0'; ++i)
    {
        // Check if the character is an uppercase letter
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            // Convert to lowercase by adding 32 to ASCII value
            input[i] = input[i] + 32;
        }
        // Check if the character is a lowercase letter
        else if (input[i] >= 'a' && input[i] <= 'z')
        {
            // Convert to uppercase by subtracting 32 from ASCII value
            input[i] = input[i] - 32;
        }
    }
    // Output the converted string
    printf("Converted string: %s", input);
    printf("\nThis program is created by Kayastha Arya_23CE055");
    return 0;
}

