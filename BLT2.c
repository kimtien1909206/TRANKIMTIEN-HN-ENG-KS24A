#include <stdio.h>
#include <ctype.h>  
void inputString(char **str) {
    *str = (char *)malloc(100 * sizeof(char));
    if (*str == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return;
    }
    printf("Nhap chuoi: ");
    getchar();  
    fgets(*str, 100, stdin);  
}
void displayString(char *str) {
    printf("Chuoi ban nhap: %s", str);
}
int countLetters(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int countDigits(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int countSpecialChars(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (!isalnum(*str) && *str != ' ') {  
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char *str = NULL;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputString(&str);  
                break;
            case 2:
                if (str != NULL) {
                    displayString(str);  
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 3:
                if (str != NULL) {
                    printf("So luong chu cai trong chuoi: %d\n", countLetters(str));  
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 4:
                if (str != NULL) {
                    printf("So luong chu so trong chuoi: %d\n", countDigits(str));  
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 5:
                if (str != NULL) {
                    printf("So luong ky tu dac biet trong chuoi: %d\n", countSpecialChars(str)); 
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 6);
    free(str);
    return 0;
}

