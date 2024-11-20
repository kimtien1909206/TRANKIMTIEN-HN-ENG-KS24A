#include <stdio.h>
int main() {
    // Khai bao v� khoi tao hai bien chieu dai v� chieu rong
    float length = 6.0; // Chieu dai (vi du 6.0)
    float width = 5.0;   // Chieu rong (vi du 5.0)
    // Khai bao cac bien de luu chu vi v� dien t�ch
    float cv, dt;
    // T�nh chu vi v� dien tich
    cv = 2 * (length + width);  // Chu vi = 2 * (chieu dai + chieu rong)
     dt = length * width;             // Dien tich = chieu dai * chieu rong
    // In ket qua
    printf("Chieu dai cua hinh chu nhat la: %.2f\n", length);
    printf("Chieu rong cua hinh chu nhat la: %.2f\n", width);
    printf("Chu vi cua hinh chu nhat la: %.2f\n", cv);
    printf("Dien tich cua hinh chu nhat la: %.2f\n", dt);
    return 0;
}

