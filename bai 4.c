#include <stdio.h>

int main() {
    // Khai bao và khoi tao bien canh cua hinh vuông
    float canh = 3.0; // Canh hình vuông (vi du 5.0)

    // Khai báo các bien de luu chu vi và dien tich
    float cv, dt;
    // Tinh chu vi và dien tich
    cv = 4 * canh;         // Chu vi = 4 * canh
    dt = canh * canh;           // Dien tich = canh * canh
    // In ket qua
    printf("Canh hinh vuong la: %.2f\n", canh);
    printf("Chu vi cua hinh vuong la: %.2f\n", cv);
    printf("Dien tich cua hinh vuong là: %.2f\n", dt);
    return 0;
}

