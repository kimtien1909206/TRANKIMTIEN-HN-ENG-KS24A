#include <stdio.h>
void inMang(int *arr, int size) {
	int i;
    for ( i = 0; i < size; i++) {
        printf("Phan tu arr[%d]: %d\n", i, *(arr + i)); 
    }
}
int main() {
    int mang[] = {1, 2, 3, 4, 5};  
    int size = sizeof(mang) / sizeof(mang[0]);  
    inMang(mang, size);
    return 0;
}

