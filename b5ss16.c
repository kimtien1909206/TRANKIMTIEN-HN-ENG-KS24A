#include <stdio.h>

int main() {
	int i;
    int Arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    printf("Mang ban dau: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(Arr + i));
    }
    printf("\n");
    int Value = 15;
    int position = 2;
    if (position >= 0 && position < size) {
        *(Arr + position) = Value; 
    } else {
        printf("Vi tri khong hop le!\n");
    }
    printf("Mang sau khi cap nhat: ");
    for (i = 0; i < size; i++) {
        printf("%d ", *(Arr + i));
    }
    printf("\n");

    return 0;
}

