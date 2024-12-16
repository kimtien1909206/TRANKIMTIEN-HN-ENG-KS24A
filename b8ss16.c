#include <stdio.h>
#include <string.h>
int main() {
    char String[100];
    char *ptr = String;
    printf("Nhap mot chuoi: ");
    fgets(String, sizeof(String), stdin);
    size_t length = strlen(String);
    if (String[length - 1] == '\n') {
        String[length - 1] = '\0';
        length--; 
    }
    char *start = ptr;             
    char *end = ptr + length - 1;  
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Chuoi dao nguoc: %s\n", ptr);
    return 0;
}

