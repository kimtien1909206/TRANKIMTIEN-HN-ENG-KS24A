#include <stdio.h>
#include <stdbool.h>
#define MAX 100

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void nhapMang(int arr[], int *n) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void hienThiMang(int arr[], int n) {
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void phanTuChanVaTong(int arr[], int n) {
    int tong = 0;
    printf("Cac phan tu chan: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("\nTong cac phan tu chan: %d\n", tong);
}

void timMaxMin(int arr[], int n) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
}

void soNguyenToVaTong(int arr[], int n) {
    int tong = 0;
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            tong += arr[i];
        }
    }
    printf("\nTong cac so nguyen to: %d\n", tong);
}

void thongKePhanTu(int arr[], int n) {
    int x, dem = 0;
    printf("Nhap gia tri can thong ke: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) dem++;
    }
    printf("So lan xuat hien cua %d la: %d\n", x, dem);
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

int main() {
    int arr[MAX], n = 0, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu\n");
        printf("3. In ra cac phan tu chan va tinh tong\n");
        printf("4. Tim gia tri lon nhat va nho nhat\n");
        printf("5. In ra cac so nguyen to va tinh tong\n");
        printf("6. Thong ke so lan xuat hien cua mot phan tu\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
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
                phanTuChanVaTong(arr, n);
                break;
            case 4:
                timMaxMin(arr, n);
                break;
            case 5:
                soNguyenToVaTong(arr, n);
                break;
            case 6:
                thongKePhanTu(arr, n);
                break;
            case 7:
                themPhanTu(arr, &n);
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
    } while (choice != 8);

    return 0;
}

