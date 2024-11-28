#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int num[n];
    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("Mang da nhap la: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

