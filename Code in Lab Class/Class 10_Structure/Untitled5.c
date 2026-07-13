#include <stdio.h>

struct Triangle {
    float base;
    float height;
};

float calculateArea(struct Triangle triAngle) {
    float area=(triAngle.base * triAngle.height) / 2.0;
    return area;
}

int main() {
    int i;
    struct Triangle triangles[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter the base of triangle %d: ", i + 1);
        scanf("%f", &triangles[i].base);
        printf("Enter the height of triangle %d: ", i + 1);
        scanf("%f", &triangles[i].height);
    }

    printf("\nAreas of the triangles:\n");


    for (i = 0; i < 3; i++) {
        printf("Triangle %d: %.2f\n",i+1,calculateArea(triangles[i]));
    }
    return 0;
}
