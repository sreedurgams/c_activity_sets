#include <stdio.h>

// Function to get input from the user
int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to find the nth Fibonacci number
int find_fibo(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, next_term;
    for (int i = 2; i <= n; i++) {
        next_term = a + b;
        a = b;
        b = next_term;
    }
    return b;
}

// Function to output the result
void output(int n, int fibo) {
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}

int main() {
    int n;
    // Get input from the user
    n = input();
    // Find the nth Fibonacci number
    int fibo = find_fibo(n);
    // Output the result
    output(n, fibo);
    return 0;
}