#include <stdio.h>

int main() {
    int i;
    int num[] = {1, 2, 3, 4, 5};
    int n = sizeof(num) / sizeof(num[0]);
    int a;
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &a);
    int found = 0; 
    for ( i = 0; i < n; i++) {
        if (num[i] == a) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1; 
            break; 
        }
    }
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}

