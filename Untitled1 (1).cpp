#include <stdio.h>

int main() {
    int n, soluong = 0, num = 2;
    printf("Nhap so luong so nguyen to can in: ");
    scanf("%d", &n);
    printf("Cac so nguyen to dau tien la: ");
    while (soluong < n) {
        int i;
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                break;
            }
        }
        if (i > num / 2) {
            printf("%d ", num);
            soluong++;
        }
        num++;
    }
    return 0;
}
