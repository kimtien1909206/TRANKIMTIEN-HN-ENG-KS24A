#include <stdio.h>
int tinhGiaithua(int n) {
    int giaithua = 1;
int i;
    for (i = 1; i <= n; i++) {
        giaithua *= i;
    }
    return giaithua;
}
int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);
    if (so < 0) {
        printf("Khong tinh duoc giai thua cua so am.\n");
    } else if (so > 12) {
        printf("So qua lon, ket qua giai thua vuot qua gioi han cua kieu int.\n");
    } else {
        printf("Giai thua cua %d la: %d\n", so, tinhGiaithua(so));
    }
    return 0;
}

