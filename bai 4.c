#include <stdio.h>

int main() {
    // Khai bao v� khoi tao bien canh cua hinh vu�ng
    float canh = 3.0; // Canh h�nh vu�ng (vi du 5.0)

    // Khai b�o c�c bien de luu chu vi v� dien tich
    float cv, dt;
    // Tinh chu vi v� dien tich
    cv = 4 * canh;         // Chu vi = 4 * canh
    dt = canh * canh;           // Dien tich = canh * canh
    // In ket qua
    printf("Canh hinh vuong la: %.2f\n", canh);
    printf("Chu vi cua hinh vuong la: %.2f\n", cv);
    printf("Dien tich cua hinh vuong l�: %.2f\n", dt);
    return 0;
}

