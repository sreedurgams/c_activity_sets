//Write a program find whether a number is a composite number
#include <stdio.h>

int input_number() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}

int is_composite(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not considered composite numbers
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 1; // Number is divisible by i, hence composite
        }
    }
    return 0; // Number is not divisible by any other number, hence not composite
}

void output(int n, int result) {
    if (result) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}

int main() {
    int number, result;

    number = input_number();
    result = is_composite(number);
    output(number, result);

    return 0;
}