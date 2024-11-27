#include <stdio.h>

int main() {
    int num, num1 = 1;
    int i;
    printf("Nhap so nguyen: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d khong phai là so nguyen to.\n", num);
    }
    else if (num1) {
        printf("%d la so nguyen to.\n", num);
    } else {
        printf("%d khong phai là so nguyen to.\n", num);
    }

    return 0;
}

