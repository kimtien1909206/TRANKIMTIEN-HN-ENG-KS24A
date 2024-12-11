#include <stdio.h>
int* taoMaTran(int soHang, int soCot, int maTran[]) {
	int i, j;
    printf("Nhap gia tri cho ma tran (%d x %d):\n", soHang, soCot);
    for (i = 0; i < soHang; i++) {
        for (j = 0; j < soCot; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i * soCot + j]); 
        }
    }
    return maTran; 
}
int inMaTran(int soHang, int soCot, int maTran[]) {
    int dem = 0;
    int i, j;
    printf("Ma tran la:\n");
    for (i = 0; i < soHang; i++) {
        for (j = 0; j < soCot; j++) {
            printf("%d ", maTran[i * soCot + j]); 
            dem++;
        }
        printf("\n");
    }
    return dem; 
}
int main() {
    int soHang, soCot;
    printf("Nhap so hang: ");
    scanf("%d", &soHang);
    printf("Nhap so cot: ");
    scanf("%d", &soCot);
    int maTran[100]; 
    taoMaTran(soHang, soCot, maTran);
    int soPhanTu = inMaTran(soHang, soCot, maTran);
    printf("So phan tu trong ma tran: %d\n", soPhanTu);
    return 0;
}

