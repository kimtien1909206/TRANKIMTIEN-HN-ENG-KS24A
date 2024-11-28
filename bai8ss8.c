#include <stdio.h>

int main() {
    int n = 4;
    int i;
    int j;
    int num[4][4] = {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12}, {13, 14, 15, 16}}; 
    printf("Ma tran vuong:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }
    printf("\nCac phan tu tren duong cheo phu:\n");
    int sum = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", num[i][n - 1 - i]); 
        sum += num[i][n - 1 - i];        
    }
    printf("\n\nTong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}

