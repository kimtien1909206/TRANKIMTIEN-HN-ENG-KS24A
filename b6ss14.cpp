#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho chuoi bat ky
    char str[] = "Lap trinh C rat thu vi! 123";
    int letterCount = 0;

    // Duyet qua chuoi de dem so ky tu la chu cai
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) { // Kiem tra xem ky tu co phai la chu cai
            letterCount++;
        }
    }

    // In ra so ky tu la chu cai trong chuoi
    printf("So ky tu la chu cai trong chuoi la: %d\n", letterCount);

    return 0;
}

