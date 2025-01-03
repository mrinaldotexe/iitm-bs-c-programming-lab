#include <stdio.h>

// Function to compute factorial
int fact(int n)
{
    int result = 1; // Initialize result
    for (int i = 1; i <= n; i++) {
        result *= i; // Multiply result by i
    }
    return result; // Return the calculated factorial
}

int main()
{
    int n = 5; // Number for which factorial is to be calculated
    int result = fact(n); // Call the function
    printf("Factorial of %d is %d\n", n, result); // Display the result
    return 0;
}