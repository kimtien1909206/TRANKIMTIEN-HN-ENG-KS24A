#include <stdio.h>
#include <string.h>

void capitalizeWords(char *str) {
    int i = 0;
    int capitalizeNext = 1; 
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            capitalizeNext = 1; 
        } else {
            if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A'); 
                capitalizeNext = 0; 
            } else if (capitalizeNext) {
                capitalizeNext = 0;
            }
        }
        i++;
    }
}
int main() {
    char str[] = "hello world";
    capitalizeWords(str);
    printf("Chuoi sau khi viet hoa: %s\n", str);
    return 0;
}
