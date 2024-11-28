#include <stdio.h>

int main() {
	int i;
    int arr[] = {3, 5, 7, 29, 55};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Các phan tu trong mang:\n");
    for(i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("do dai cua mang la: %d\n", length);
    
    return 0;
}

