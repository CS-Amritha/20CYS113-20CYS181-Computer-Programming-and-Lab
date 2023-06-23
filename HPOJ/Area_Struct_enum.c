#include<stdio.h>

struct Shape {
    union {
        float length;
        float radius;
    };
    enum ShapeType { Circle = 1, Rectangle = 2 } type;
};

int main() {
    struct Shape s;
    int choice;
    
    scanf("%d", &choice);

    float area;
    float b;
    switch (choice) {
        case 1:
            scanf("%f", &s.radius);
            area = 3.14 * s.radius * s.radius;
            printf("Area of the circle: %.4f units\n", area);
            break;
        case 2:
            
            scanf("%f %f", &s.length, &b);
            area = s.length * b;
            printf("Area of the rectangle: %.4f units\n", area);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}