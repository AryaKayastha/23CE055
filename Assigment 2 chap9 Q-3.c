//This program is created by Kayastha Arya_23CE055
#include <stdio.h>

// Function to calculate the sum of digits recursively
int sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    } else
    {
        return (num % 10) + sumOfDigits(num / 10);
    }
}

int main()
{
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and print the sum of digits
    int result = sumOfDigits(number);
    printf("Sum of the digits of %d is: %d\n", number, result);
    printf("\nThis program is created by Kayastha Arya_23CE055");
    return 0;
}

