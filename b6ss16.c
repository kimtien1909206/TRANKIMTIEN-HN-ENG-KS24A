#include <stdio.h>
int main() {
	int i;
    int Arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    int value = 10;
    int position = -1; 
    for (i = 0; i < size; i++) {
        if (*(Arr + i) == value) {
            position = i; 
            break;        
        }
    }
    if (position != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri: %d\n", value, position);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", value);
    }

    return 0;
}

