#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

// Function to find the smallest fraction
Fraction find_smallest_fraction(Fraction fractions[]) {
    Fraction smallest = fractions[0];
    for (int i = 1; i < 3; ++i) {
        // Compare fractions by cross-multiplying
        if (fractions[i].num * smallest.den < smallest.num * fractions[i].den) {
            smallest = fractions[i];
        }
    }
    return smallest;
}

int main() {
    Fraction fractions[3];
    printf("Enter three fractions (numerator/denominator):\n");
    for (int i = 0; i < 3; ++i) {
        printf("Fraction %d: ", i + 1);
        scanf("%d/%d", &fractions[i].num, &fractions[i].den);
    }

    // Find the smallest fraction
    Fraction smallest = find_smallest_fraction(fractions);

    printf("The smallest fraction is %d/%d\n", smallest.num, smallest.den);
    return 0;
}
