#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("M?ng ban d?u: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int position, newValue;
    printf("Nh?p v? tr� c?n s?a (0 - %d): ", n - 1);
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("V? tr� kh�ng h?p l?!\n");
    } else {
        printf("Nh?p gi� tr? m?i: ");
        scanf("%d", &newValue);
        arr[position] = newValue;
        printf("M?ng sau khi s?a: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

