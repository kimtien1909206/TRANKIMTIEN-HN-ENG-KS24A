#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    // Yêu cau nguoi dung nhap nhiet do theo do Celsius
    printf("Vui long nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);
    // Chuyen doi tu Celsius sang Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;
    // Hien thi ket qua
    printf("%.2f do Celsius tuong duong voi %.2f d? Fahrenheit.\n", celsius, fahrenheit);
    return 0;
}

