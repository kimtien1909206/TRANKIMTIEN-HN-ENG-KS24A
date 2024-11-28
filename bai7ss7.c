#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int num[n];
    for ( i = 0; i < n; i++) {
        int num2;
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &num2);
        while (num2 % 2 == 0) {
            printf("Gia tri khong hop le. Vui long nhap so le: ");
            scanf("%d", &num2);
        }
        num[i] = num2;
    }
    printf("Cac phan tu cua mang la: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

