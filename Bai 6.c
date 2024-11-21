#include <stdio.h>

int main() {
    // Khai bao hang so PI kieu du lieu float
    const float PI = 3.14;
    // Khai báo bien ban kinh
    float radius;
    // Nhap ban kinh
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &radius);
    // Tinh chu vi hinh tron: C = 2 * PI * radius
    float circumference = 2 * PI * radius;
    // Tinh dien tich hinh tron: A = PI * radius * radius
    float area = PI * radius * radius;
    // Hien thi ket qua
    printf("Chu vi hinh tron la: %.2f\n", circumference);
    printf("Dien tich hinh tron la: %.2f\n", area);
    return 0;
}

