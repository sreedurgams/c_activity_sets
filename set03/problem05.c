#include <stdio.h>
#include <stdbool.h>

// Function to get the size of the array from the user
int input_array_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

// Function to initialize the array with consecutive numbers starting from 2
void init_array(int n, int a[n]) {
    for (int i = 0; i < n; i++) {
        a[i] = i + 2;
    }
}

// Function to implement the Sieve of Eratosthenes algorithm to find prime numbers
void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            for (int j = 2 * a[i] - 2; j < n; j += a[i]) {
                a[j] = 0;
            }
        }
    }
}

// Function to output the array
void output(int n, int a[n]) {
    printf("Prime numbers up to %d are:\n", n);
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int size = input_array_size();
    int array[size];
    
    init_array(size, array);
    eratosthenes_sieve(size, array);
    output(size, array);
    
    return 0;
}