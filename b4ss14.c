#include <stdio.h>
int main() {
    char str[] = "Lap trinh C rat thu vi!";
    char ch;
    int count = 0;
    printf("Chuoi hien tai: %s\n", str);
    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);

    return 0;
}

