#include <stdio.h>

int main() {
    float base, height, area;
    // Yeu cau nguoi dung nhap do dai canh day v� chieu cao cua tam giac
    printf("Vui long nhap do dai canh day cua tam gi�c: ");
    scanf("%f", &base);
    printf("Vui long nhap chieu cao cua tam gi�c: ");
    scanf("%f", &height);
    // T�nh dien tich cua tam giac
    area = 0.5 * base * height;
    // Hien thi ket qua
    printf("Dien tich cua tam giac la: %.2f\n", area);
    return 0;
}

