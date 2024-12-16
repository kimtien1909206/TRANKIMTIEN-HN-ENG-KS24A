#include <stdio.h>
void tinhTong(int *a, int *b, int *kq) {
    *kq = *a + *b;  
}
int main() {
    int x = 7, y = 12;  
    int ketQua;         
    tinhTong(&x, &y, &ketQua);
    printf("Tong cua %d va %d la: %d\n", x, y, ketQua);
    return 0;
}

