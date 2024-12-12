#include <stdio.h>

int main() {
    char str[] = "Lap trinh C rat thu vi!";
    int wordCount = 0;
    int inWord = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                inWord = 1; 
                wordCount++;
            }
        } else {
            inWord = 0; 
        }
    }
    printf("So tu trong chuoi la: %d\n", wordCount);

    return 0;
}
