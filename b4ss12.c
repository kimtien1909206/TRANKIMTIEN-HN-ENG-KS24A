#include <stdio.h>
int timSoLonNhat(int arr[], int kichThuoc) {
    int max = arr[0]; 
    int i;
    for ( i = 1; i < kichThuoc; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max; 
}
int main() {
    int mang[] = {3, 9, 6, 2, 15, 10};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 
    int soLonNhat = timSoLonNhat(mang, kichThuoc);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);
    return 0;
}

