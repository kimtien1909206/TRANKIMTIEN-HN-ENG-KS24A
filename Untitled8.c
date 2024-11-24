#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("nhap vao canh thu nhat cua tam giac (a)");
    scanf("%d", &a);
     printf("nhap vao canh thu hai cua tam giac (b)");
    scanf("%d", &b);
     printf("nhap vao canh thu ba cua tam giac (c)");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }
    return 0;
}

