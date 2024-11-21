#include <stdio.h>

int main() {
    float base, height, area;
    // Yeu cau nguoi dung nhap do dai canh day và chieu cao cua tam giac
    printf("Vui long nhap do dai canh day cua tam giác: ");
    scanf("%f", &base);
    printf("Vui long nhap chieu cao cua tam giác: ");
    scanf("%f", &height);
    // Tính dien tich cua tam giac
    area = 0.5 * base * height;
    // Hien thi ket qua
    printf("Dien tich cua tam giac la: %.2f\n", area);
    return 0;
}

