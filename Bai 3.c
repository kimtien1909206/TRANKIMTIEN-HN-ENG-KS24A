#include <stdio.h>
int main() {
    // Khai bao và khoi tao hai bien so nguyên
    int a = 20;
    int b = 10;
    // Khai bao ba bien de luu ket qua: hieu, tich và thuong
    int difference, product, quotient;
    // Tính hieu, tich và thuong cua a và b
    difference = a - b;
    product = a * b;
    // Kiem tra chia cho 0
    if (b != 0) {
        quotient = a / b;
    } else {
        printf("Khong the chia cho 0!\n");
        return 1; // Ket thuc chuong trinh neu chia cho 0
    }
    // In ket qua
    printf("Hieu cua a và b là: %d\n", difference);
    printf("Tich cua a và b là: %d\n", product);
    printf("Thuong cua a và b là: %d\n", quotient);
    return 0;
}

