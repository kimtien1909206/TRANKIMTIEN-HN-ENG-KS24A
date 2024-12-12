#include <stdio.h>
#include <string.h>
void countCharacter(char *str) {
	int i;
    int arr[256] = {0}; 
    for (i = 0; str[i] != '\0'; i++) {
        arr[(unsigned char)str[i]]++;
    }
    printf("Ky tu va so lan xuat hien:\n");
    for (i = 0; i < 256; i++) {
        if (arr[i] > 0) {
            printf("%c: %d\n", i, arr[i]);
        }
    }
}
int main() {
    char str[] = "hello world"; 
    printf("Chuoi ban dau: %s\n", str);
    countCharacter(str);
    return 0;
}

