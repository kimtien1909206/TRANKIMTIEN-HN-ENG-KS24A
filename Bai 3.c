#include <stdio.h>
int main() {
    // Khai bao v� khoi tao hai bien so nguy�n
    int a = 20;
    int b = 10;
    // Khai bao ba bien de luu ket qua: hieu, tich v� thuong
    int difference, product, quotient;
    // T�nh hieu, tich v� thuong cua a v� b
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
    printf("Hieu cua a v� b l�: %d\n", difference);
    printf("Tich cua a v� b l�: %d\n", product);
    printf("Thuong cua a v� b l�: %d\n", quotient);
    return 0;
}

