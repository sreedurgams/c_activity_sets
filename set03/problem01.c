#include <stdio.h>
#include <math.h>

// Function prototypes
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main() {
    float x1, y1, x2, y2;
    
    // Input the coordinates
    input(&x1, &y1, &x2, &y2);
    
    // Calculate the distance
    float distance = find_distance(x1, y1, x2, y2);
    
    // Output the coordinates and distance
    output(x1, y1, x2, y2, distance);
    
    return 0;
}

// Function definitions
void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", x1, y1);
    
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("Coordinates of first point: (%.2f, %.2f)\n", x1, y1);
    printf("Coordinates of second point: (%.2f, %.2f)\n", x2, y2);
    printf("Distance between the points: %.2f\n", distance);
}