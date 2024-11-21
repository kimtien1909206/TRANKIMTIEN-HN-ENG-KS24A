#include <stdio.h>
#define PI 3.14159  // Ðinh nghia hang so PI
int main() {
    float r, circumference, area;
    // Yêu cau nguoi dung nhap ban kinh hinh tron
    printf("Vui long nhap ban kinh hinh tron (r): ");
    scanf("%f", &r);
    // Tinh chu vi va dien tich
    circumference = 2 * PI * r;  // Chu vi = 2 * PI * r
    area = PI * r * r;  // Di?n tích = PI * r^2
    // In ket qua voi 2 chu so thap phan
    printf("Chu vi hinh tron la: %.2f\n", circumference);
    printf("Dien tich hinh tron la: %.2f\n", area);
    return 0;
}

