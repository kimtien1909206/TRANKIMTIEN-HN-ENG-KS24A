#include <stdio.h>

int main() {
	int i;
	int j;
    int rows = 4, cols = 5; 
    int arr[4][5] = {{1, 2, 3, 4, 5},{6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20} };
    printf("Ma tran:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (j = 0; j < cols; j++) {
        sum += arr[0][j];     
        sum += arr[rows - 1][j]; 
    }
    for (i = 1; i < rows - 1; i++) {
        sum += arr[i][0];      
        sum += arr[i][cols - 1]; 
    }
    printf("\nTong cac phan tu trên duong bien cua ma tran la: %d\n", sum);

    return 0;
}

