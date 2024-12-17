#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void inputString(char **str) {
    *str = (char *)malloc(100 * sizeof(char));  
    if (*str == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return;
    }
    printf("Nhap chuoi: ");
    getchar();  
    fgets(*str, 100, stdin); 
    (*str)[strlen(*str) - 1] = '\0';  
}
void reverseString(char *str) {
    int len = strlen(str);
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}
int countWords(char *str) {
    int count = 0;
    int inWord = 0;
    while (*str) {
        if (isspace(*str)) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}
void compareStrings(char *str1) {
    char *str2;
    inputString(&str2); 
    if (strlen(str2) < strlen(str1)) {
        printf("Chuoi moi ngan hon chuoi ban dau\n");
    } else if (strlen(str2) > strlen(str1)) {
        printf("Chuoi moi dai hon chuoi ban dau\n");
    } else {
        printf("Hai chuoi co do dai bang nhau\n");
    }

    free(str2);
}
void toUpperCase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
    printf("Chuoi in hoa: %s\n", str);
}
void appendString(char **str1) {
    char *str2;
    inputString(&str2); 
    int len1 = strlen(*str1);
    int len2 = strlen(str2);
    *str1 = (char *)realloc(*str1, (len1 + len2 + 1) * sizeof(char));  
    if (*str1 == NULL) {
        printf("Khong the cap phat bo nho!\n");
        free(str2);
        return;
    }
    strcat(*str1, str2);  
    printf("Chuoi sau khi them: %s\n", *str1);
    free(str2);
}
int main() {
    char *str = NULL;
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputString(&str);  
                break;
            case 2:
                if (str != NULL) {
                    reverseString(str);  
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 3:
                if (str != NULL) {
                    printf("So luong tu trong chuoi: %d\n", countWords(str));  
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 4:
                if (str != NULL) {
                    compareStrings(str); 
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 5:
                if (str != NULL) {
                    toUpperCase(str);  
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 6:
                if (str != NULL) {
                    appendString(&str);
                } else {
                    printf("Chuoi chua duoc nhap!\n");
                }
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 7);
    free(str);
    return 0;
}

