#include <stdio.h>

int main() {
    int i;
    int num[5] = {3,7,9,10,45};

    int max = num[0];
    int min = num[0];

    
    for ( i = 1; i < 5; i++) {
        if (num[i] > max) {
            max = num[i]; 
        }
        if (num[i] < min) {
            min = num[i]; 
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    return 0;
}

