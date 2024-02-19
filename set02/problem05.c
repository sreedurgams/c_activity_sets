//Write a program to find GCD (HCF) of two numbers.
#include <stdio.h>

int input() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}

int find_gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void output(int a, int b, int gcd) {
    printf("GCD of %d and %d is %d\n", a, b, gcd);
}

int main() {
    int num1, num2, gcd;

    num1 = input();
    num2 = input();
    gcd = find_gcd(num1, num2);
    output(num1, num2, gcd);

    return 0;
}