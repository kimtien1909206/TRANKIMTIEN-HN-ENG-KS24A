#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    for (i = 1; i >= n; i++) {
        sum += i;
    }
    printf("Tong tat ca cac so tu 1 den %d là: %d\n", n, sum);
    return 0;
}

	
