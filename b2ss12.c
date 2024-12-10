#include <stdio.h>
int inMang(int arr[], int kichThuoc) {
	int i;
    for (i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return kichThuoc; 
}
int main() {
    int mang[] = {1, 2, 3, 4, 5}; 
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 
    int soLuong = inMang(mang, kichThuoc);
    printf("So luong phan tu trong mang: %d\n", soLuong);
    return 0;
}

