#include <stdio.h>

int main() {
    int num;
    int i;
    printf("Nhap mot so nguyen duong : ");
    scanf("%d", &num);
    
    printf("Cac uoc cua so %d l�: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

