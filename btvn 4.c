#include <stdio.h>
#define MAX 100

void nhapMang(int arr[], int *n) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int n) {
    if (n == 0) {
        printf("Mang dang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    if (*n >= MAX) {
        printf("Mang da day, khong the them phan tu moi.\n");
        return;
    }
    int x, pos;
    printf("Nhap gia tri can them: ");
    scanf("%d", &x);
    printf("Nhap vi tri can them (0-%d): ", *n);
    scanf("%d", &pos);

    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    (*n)++;
    printf("Da them phan tu thanh cong!\n");
}

void suaPhanTu(int arr[], int n) {
    if (n == 0) {
        printf("Mang dang rong, khong co phan tu de sua!\n");
        return;
    }
    int pos, x;
    printf("Nhap vi tri can sua (0-%d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &x);
    arr[pos] = x;
    printf("Da sua phan tu thanh cong!\n");
}

void xoaPhanTu(int arr[], int *n) {
    if (*n == 0) {
        printf("Mang dang rong, khong co phan tu de xoa!\n");
        return;
    }
    int pos;
    printf("Nhap vi tri can xoa (0-%d): ", *n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Da xoa phan tu thanh cong!\n");
}

int main() {
    int arr[MAX], n = 0, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                hienThiMang(arr, n);
                break;
            case 3:
                themPhanTu(arr, &n);
                break;
            case 4:
                suaPhanTu(arr, n);
                break;
            case 5:
                xoaPhanTu(arr, &n);
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
    } while (choice != 6);

    return 0;
}

