//Write a program to find if a triangle is scalene.
#include <stdio.h>

int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c)
        return 1; // It's a scalene triangle
    else
        return 0; // It's not a scalene triangle
}

void output(int a, int b, int c, int isscalene) {
    printf("Side a: %d\n", a);
    printf("Side b: %d\n", b);
    printf("Side c: %d\n", c);
    if (isscalene)
        printf("The triangle with sides %d, %d, and %d is a scalene triangle.\n", a, b, c);
    else
        printf("The triangle with sides %d, %d, and %d is not a scalene triangle.\n", a, b, c);
}

int main() {
    int a, b, c;
    int isscalene;

    a = input_side();
    b = input_side();
    c = input_side();

    isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);

    return 0;
}