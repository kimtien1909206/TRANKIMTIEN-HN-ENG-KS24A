#include <stdio.h>
int main() {
    char name1[50], name2[50], name3[50], name4[50], name5[50];
    int age1, age2, age3, age4, age5;
    char phone1[15], phone2[15], phone3[15], phone4[15], phone5[15];
    printf("Nhap thong tin cho sinh vien 1:\n");
    printf("Ten: ");
    scanf(" %[^\n]", name1);
    printf("Tuoi: ");
    scanf("%d", &age1);
    printf("So dien thoai: ");
    scanf(" %[^\n]", phone1);
    printf("Nhap thong tin cho sinh vien 2:\n");
    printf("Ten: ");
    scanf(" %[^\n]", name2);
    printf("Tuoi: ");
    scanf("%d", &age2);
    printf("So dien thoai: ");
    scanf(" %[^\n]", phone2);
    printf("Nhap thong tin cho sinh vien 3:\n");
    printf("Ten: ");
    scanf(" %[^\n]", name3);
    printf("Tuoi: ");
    scanf("%d", &age3);
    printf("So dien thoai: ");
    scanf(" %[^\n]", phone3);
    printf("Nhap thong tin cho sinh vien 4:\n");
    printf("Ten: ");
    scanf(" %[^\n]", name4);
    printf("Tuoi: ");
    scanf("%d", &age4);
    printf("So dien thoai: ");
    scanf(" %[^\n]", phone4);
    printf("Nhap thong tin cho sinh vien 5:\n");
    printf("Ten: ");
    scanf(" %[^\n]", name5);
    printf("Tuoi: ");
    scanf("%d", &age5);
    printf("So dien thoai: ");
    scanf(" %[^\n]", phone5);
    printf("\nThong tin cac sinh vien:\n");
    printf("Sinh vien 1: Ten: %s, Tuoi: %d, So dien thoai: %s\n", name1, age1, phone1);
    printf("Sinh vien 2: Ten: %s, Tuoi: %d, So dien thoai: %s\n", name2, age2, phone2);
    printf("Sinh vien 3: Ten: %s, Tuoi: %d, So dien thoai: %s\n", name3, age3, phone3);
    printf("Sinh vien 4: Ten: %s, Tuoi: %d, So dien thoai: %s\n", name4,age4, phone4);
    printf("Sinh vien 5: Ten: %s, Tuoi: %d, So dien thoai: %s\n", name5, age5, phone5);

    return 0;
    }

