#include <stdio.h>
int main() {
    int i;
    int j;
    int n = 4; 
    int num[4][4] = {{1, 2, 3, 8},{5, 6, 7, 9},{13, 10, 11, 12},{18, 14, 15, 16}};
    printf("Ma tran vuong:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }
    printf("\nCac phan tu tren duong cheo chinh:\n");
    int sum = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", num[i][i]); 
        sum += num[i][i];       
    }
    printf("\n\nTong cac phan tu tren duong cheo chinh : %d\n", sum);
    return 0;
}

