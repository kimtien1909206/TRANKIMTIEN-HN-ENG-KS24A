#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX];   
    int n;           
    int value, pos;  
    int i;
    do {
        printf("Nhap so phan tu muon nhap (toi da %d): ", MAX);
        scanf("%d", &n);
        if (n < 1 || n > MAX) {
            printf("So phan tu khong hop le. Vui long nhap lai!\n");
        }
    } while (n < 1 || n > MAX);
    printf("Nhap %d phan tu:\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &value);

    do {
        printf("Nhap vi tri muon them (0 den %d): ", n);
        scanf("%d", &pos);
        if (pos < 0 || pos > n) {
            printf("Vi tri khong hop le. Vui long nhap lai!\n");
        }
    } while (pos < 0 || pos > n);
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
    printf("Mang sau khi them phan tu:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

