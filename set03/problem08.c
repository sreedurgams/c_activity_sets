#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *p) {
    p->sides = input_n();
    printf("Enter the coordinates of the vertices:\n");
    for (int i = 0; i < p->sides; i++) {
        char prompt[50];
        sprintf(prompt, "Vertex %d (x y): ", i+1);
        p->p[i] = input_point(prompt);
    }
    return p->sides;
}

float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void find_perimeter(Polygon* p) {
    p->perimeter = 0.0;
    for (int i = 0; i < p->sides; i++) {
        int next = (i + 1) % p->sides;
        p->perimeter += find_distance(p->p[i], p->p[next]);
    }
}

void output(Polygon p) {
    printf("Polygon with %d sides:\n", p.sides);
    for (int i = 0; i < p.sides; i++) {
        printf("Vertex %d: (%.2f, %.2f)\n", i + 1, p.p[i].x, p.p[i].y);
    }
    printf("Perimeter: %.2f\n", p.perimeter);
}

int main() {
    Polygon poly;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}