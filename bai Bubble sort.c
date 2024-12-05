#include <stdio.h>
#include <math.h>

#define MAX 100 
int main() {
    int choice, size = 0, arr[MAX], index, value;
    int i, j;
    int even = 0, odd = 0;
    int prime = 0;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5 ...)\n");
        printf("3. Dem so luong phan tu chan, le\n");
        printf("4. Tim gia tri lon thu hai trong mang\n");
        printf("5. Them mot phan tu vao dau mang\n");
        printf("6. Xoa phan tu tai mot vi tri\n");
        printf("7. Sap xep mang theo thu tu giam dan (Insertion sort)\n");
        printf("8. Tim kiem phan tu trong mang (Binary search)\n");
        printf("9. In ra toan bo so nguyen to trong mang da binh phuong\n");
        printf("10. Sap xep mang theo thu tu giam dan (Bubble sort)\n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &size);
                if (size > MAX) {
                    printf("So phan tu vuot qua gioi han (%d)!\n", MAX);
                    size = 0;
                } else {
                    for (i = 0; i < size; i++) {
                        printf("arr[%d] = ", i);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            case 2:
                if (size == 0) {
                    printf("Mang rong!\n");
                } else {
                    for (i = 0; i < size; i++) {
                        printf("arr[%d] = %d\n", i, arr[i]);
                    }
                }
                break;

            case 3:
                
                for (i = 0; i < size; i++) {
                    if (arr[i] % 2 == 0) {
                        even++;
                    } else {
                        odd++;
                    }
                }
                printf("So phan tu chan: %d\n", even);
                printf("So phan tu le: %d\n", odd);
                break;
            case 4:
                if (size < 2) {
                    printf("Khong du phan tu de tim gia tri lon thu hai!\n");
                } else {
                    int max = arr[0], secondMax = -1;
                    for (i = 1; i < size; i++) {
                        if (arr[i] > max) {
                            secondMax = max;
                            max = arr[i];
                        } else if (arr[i] > secondMax && arr[i] != max) {
                            secondMax = arr[i];
                        }
                    }
                    printf("Gia tri lon thu hai: %d\n", secondMax);
                }
                break;
            case 5:
                if (size >= MAX) {
                    printf("Mang da day, khong the them phan tu moi!\n");
                } else {
                    printf("Nhap gia tri can them vao dau mang: ");
                    scanf("%d", &value);
                    for (i = size; i > 0; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = value;
                    size++;
                }
                break;
            case 6:
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &index);
                if (index < 0 || index >= size) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (i = index; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                }
                break;
            case 7:
                for (i = 1; i < size; i++) {
                    int key = arr[i];
                    int j = i - 1;
                    while (j >= 0 && arr[j] < key) {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = key;
                }
                printf("Mang sau khi Insertion sort:\n");
                for (i = 0; i < size; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;

            case 8:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                int left = 0, right = size - 1, found = 0;
                while (left <= right) {
                    int mid = (left + right) / 2;
                    if (arr[mid] == value) {
                        printf("Phan tu %d tim thay tai vi tri %d.\n", value, mid);
                        found = 1;
                        break;
                    } else if (arr[mid] < value) {
                        left = mid + 1;
                    } else {
                        right = mid - 1;
                    }
                }
                if (!found) {
                    printf("Phan tu %d khong ton tai trong mang.\n", value);
                }
                break;
            case 9:
                
                printf("Cac so nguyen to trong mang da binh phuong:\n");
                for (i = 0; i < size; i++) {
                    int num = arr[i];
                    if (num < 2) continue;
                    int isPrime = 1;
                    for (j = 2; j <= sqrt(num); j++) {
                        if (num % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("%d ", num * num);
                        prime = 1;
                    }
                }
                if (!prime) {
                    printf("Khong co so nguyen to nao trong mang.\n");
                }
                break;
            case 10:
                for (i = 0; i < size - 1; i++) {
                    for (j = 0; j < size - i - 1; j++) {
                        if (arr[j] < arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Mang sau khi Bubble sort:\n");
                for (i = 0; i < size; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;
            case 11:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai!\n");
        }
    } while (choice != 11);

    return 0;
}

