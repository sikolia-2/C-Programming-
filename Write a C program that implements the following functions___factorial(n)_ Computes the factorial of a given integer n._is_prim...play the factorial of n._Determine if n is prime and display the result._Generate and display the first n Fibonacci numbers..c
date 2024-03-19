
#include <stdio.h>

// Function to compute the factorial of a given integer n
int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to determine whether a given integer n is prime or not
int is_prime(int n) {
    if (n <= 1) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to generate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Calculate and display the factorial of n
    printf("Factorial of %d: %d\n", n, factorial(n));

    // Determine if n is prime and display the result
    if (is_prime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    // Generate and display the first n Fibonacci numbers
    printf("First %d Fibonacci numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
