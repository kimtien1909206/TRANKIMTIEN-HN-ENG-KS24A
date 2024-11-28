#include <stdio.h>

int main() {
	int i;
    int num[5] = {2,4,6,8,0};
    printf("Mang ban dau: ");
    for ( i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            num[i] += 3; 
        } else {
            num[i] += 2; 
        }
    }
    printf("Mang sau khi thay doi: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

