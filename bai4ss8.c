#include <stdio.h>

int main() {
    int i;
    int j;
    int rows = 3, cols = 4; 
    int arr[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    printf("Ma tran:\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int max = arr[0][0]; 
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("\nPhan tu lon nhat trong mang la: %d\n", max);

    return 0;
}

