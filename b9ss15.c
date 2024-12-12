#include <stdio.h>
#include <string.h>

void removeCharacter(char *str, char ch) {
    int i, j = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[] = "hello world"; 
    char ch;

    printf("Chuoi ban dau: %s\n", str);
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &ch);

    removeCharacter(str, ch);

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);

    return 0;
}

