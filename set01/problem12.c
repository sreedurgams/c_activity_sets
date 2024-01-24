#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() 
{
    int n;
    Complex result;
    n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    result = add_n_complex(n, c);
    output(n, c, result);
    return 0;
}

int get_n()
 {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() 
{
    Complex c;
    printf("Enter the real and imaginary parts of a complex number: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n])
 {
    for (int i = 0; i < n; i++) {
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) 
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n])
 {
    Complex sum = {0, 0};
    for (int i = 0; i < n; i++)
     {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) 
{
    printf("The sum of ");
    for (int i = 0; i < n; i++) 
    {
        printf("(%.2f + %.2fi)", c[i].real, c[i].imaginary);
        if (i < n - 1) 
        {
            printf(", ");
        }
    }
    printf(" is (%.2f + %.2fi)\n", result.real, result.imaginary);
}
