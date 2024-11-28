#include <stdio.h>

int main() {
    int num[5];
    int i;
   
    printf("Nhap 5 phan tu cho mang:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Cac phan tu trong mang la:\n");
    for (i = 0; i < 5; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }

    return 0;
}

