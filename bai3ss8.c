#include <stdio.h>

int main() {
    int n;
    int i;
    int j;
    printf("Nhap vao mot so nguyen (n x n): ");
    scanf("%d", &n);
    int arr[n][n];
    int num = 1; 
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            arr[i][j] = num++;
        }
    }
    printf("Ma tran vuong:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

