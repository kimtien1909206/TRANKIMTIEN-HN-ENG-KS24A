#include <stdio.h>

int main() {
    char name[100];
    // Yeu cau nguoi dung nhap ten
    printf("Vui long nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    // In ra l?i chào
    printf("Xin chao %s!\n", name);

    return 0;
}

