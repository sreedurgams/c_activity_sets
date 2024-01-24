#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
    Complex a, b, sum;
    a = input_complex();
    b = input_complex();
    sum = add_complex(a, b);
    output(a, b, sum);
    return 0;
}

Complex input_complex() {
    Complex c;
    printf("Enter the real and imaginary parts of a complex number: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("The sum of (%.2f + %.2fi) and (%.2f + %.2fi) is (%.2f + %.2fi)\n",
           a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}
