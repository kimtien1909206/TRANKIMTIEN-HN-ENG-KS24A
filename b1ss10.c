#include <stdio.h>
int main (){
	int i;
	  int arr[] = {5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Mang hien tai: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int found = 0;
    for ( i = 0; i < size; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d duoc tim thay o vi tri %d (chi so bat dau tu 0).\n", x, i);
            found = 1;
            break;
    }
        if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", x);
    }
}
    return 0;
}

