#include <stdio.h>
int kiemTraSoHoanHao(int n) {
    if (n <= 0) {
        return 0; 
    }
    int tongUoc = 0;
    int i;
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tongUoc += i; 
        }
    }
    if (tongUoc == n) {
        return 1; 
    } else {
        return 0;
    }
}
int main() {
    int so1, so2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    if (kiemTraSoHoanHao(so1)) {
        printf("%d la so hoan hao.\n", so1);
    } else {
        printf("%d khong phai la so hoan hao.\n", so1);
    }
    if (kiemTraSoHoanHao(so2)) {
        printf("%d la so hoan hao.\n", so2);
    } else {
        printf("%d khong phai la so hoan hao.\n", so2);
    }
    return 0;
}

