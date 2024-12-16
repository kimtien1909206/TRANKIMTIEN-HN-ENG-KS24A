#include <stdio.h>
int main() {
	int i, j;
    int Arr[] = {5, 2, 4, 1, 3};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    printf("Mang ban dau: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", *(Arr + i));
    }
    printf("\n");
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (*(Arr + j) > *(Arr + j + 1)) {
                int temp = *(Arr + j);
                *(Arr + j) = *(Arr + j + 1);
                *(Arr + j + 1) = temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(Arr + i));
    }
    printf("\n");

    return 0;
}

