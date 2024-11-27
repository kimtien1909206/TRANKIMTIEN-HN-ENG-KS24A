#include <stdio.h>

int main() {
    int num;
    int i;
    int num1 = 0, num2 = 0;
    for (i= 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            num1++;
        } else {
            num2++;
        }
    }
    printf("so luong so chan la: %d\n", num1);
    printf("so luong so le la: %d\n", num2);

    return 0;
}

