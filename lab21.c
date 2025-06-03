#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vector3D;

float dot_product(Vector3D a, Vector3D b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector3D input_vector(const char* name) {
    Vector3D vec;
    printf("Введіть координати вектора %s:\n", name);
    printf("x: ");
    scanf("%f", &vec.x);
    printf("y: ");
    scanf("%f", &vec.y);
    printf("z: ");
    scanf("%f", &vec.z);
    return vec;
}

void print_vector(Vector3D vec, const char* name) {
    printf("Вектор %s: (%.2f, %.2f, %.2f)\n", name, vec.x, vec.y, vec.z);
}

int main() {
    system("chcp 65001");

    Vector3D vec1 = input_vector("A");
    Vector3D vec2 = input_vector("B");

    print_vector(vec1, "A");
    print_vector(vec2, "B");

    float result = dot_product(vec1, vec2);

    printf("\nСкалярний добуток векторів A і B: %.2f\n", result);
    
    return 0;
}