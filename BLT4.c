#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void inputArray(int **arr, int *size) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", size);
    *arr = (int *)malloc(*size * sizeof(int));  
    if (*arr == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return;
    }
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < *size; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}
void printEvenNumbers(int *arr, int size) {
    printf("Cac phan tu la so chan:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
void printPrimeNumbers(int *arr, int size) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
void reverseArray(int *arr, int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("M?ng sau khi d?o ngu?c: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sortAscending(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("M?ng sau khi s?p x?p tang d?n: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void sortDescending(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("M?ng sau khi s?p x?p gi?m d?n: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void searchElement(int *arr, int size) {
    int searchValue;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &searchValue);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            printf("Phan tu %d ton tai tai vi tri %d\n", searchValue, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang\n", searchValue);
    }
}
int main() {
    int *arr = NULL;
    int size = 0;
    int choice, sortChoice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputArray(&arr, &size); 
                break;
            case 2:
                if (arr != NULL) {
                    printEvenNumbers(arr, size);  
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 3:
                if (arr != NULL) {
                    printPrimeNumbers(arr, size); 
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 4:
                if (arr != NULL) {
                    reverseArray(arr, size);  
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 5:
                if (arr != NULL) {
                    printf("\nMENU SAP XEP\n");
                    printf("1. Tang dan\n");
                    printf("2. Giam dan\n");
                    printf("Lua chon cua ban: ");
                    scanf("%d", &sortChoice);

                    switch (sortChoice) {
                        case 1:
                            sortAscending(arr, size);  
                            break;
                        case 2:
                            sortDescending(arr, size); 
                            break;
                        default:
                            printf("Lua chon khong hop le!\n");
                            break;
                    }
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 6:
                if (arr != NULL) {
                    searchElement(arr, size);  
                } else {
                    printf("Mang chua duoc nhap!\n");
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 7);  
    free(arr);
    return 0;
}

