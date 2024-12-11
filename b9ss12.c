#include <stdio.h>
int laSoNguyenTo(int n) {
	int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int nhapMang(int n, int m, int mang[]) {
	int i, j;
    printf("Nhap gia tri cho mang (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i * m + j]);
        }
    }
    return 1;
}
int inMaTran(int n, int m, int mang[]) {
	int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mang[i * m + j]);
        }
        printf("\n");
    }
    return 1;
}
int inGoc(int n, int m, int mang[]) {
    printf("Cac phan tu o goc:\n");
    printf("%d %d\n", mang[0], mang[m - 1]);
    printf("%d %d\n", mang[(n - 1) * m], mang[(n - 1) * m + (m - 1)]);
    return 1;
}
int inDuongBien(int n, int m, int mang[]) {
	int i, j;
    printf("Cac phan tu tren duong bien:\n");
    for (i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%d ", mang[i * m + j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 1;
}
int inDuongCheo(int n, int m, int mang[]) {
	int i, j;
    printf("Cac phan tu tren duong cheo:\n");
    for ( i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%d ", mang[i * m + j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 1;
}
int inSoNguyenTo(int n, int m, int mang[]) {
	int i, j;
    printf("Cac so nguyen to trong ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (laSoNguyenTo(mang[i * m + j])) {
                printf("%d ", mang[i * m + j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 1;
}
int main() {
    int n, m, luaChon;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    int mang[1000];
    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);
        if (luaChon == 1) {
            nhapMang(n, m, mang);
        } else if (luaChon == 2) {
            inMaTran(n, m, mang);
        } else if (luaChon == 3) {
            inGoc(n, m, mang);
        } else if (luaChon == 4) {
            inDuongBien(n, m, mang);
        } else if (luaChon == 5) {
            inDuongCheo(n, m, mang);
        } else if (luaChon == 6) {
            inSoNguyenTo(n, m, mang);
        }
    } while (luaChon != 7);
    return 0;
}

