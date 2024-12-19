#include <stdio.h>
#define MAX_STUDENTS 50
struct Student {
    int id;           
    char name[50];     
    int age;           
    char phoneNumber[15]; 
};
int main() {
    struct Student students[MAX_STUDENTS];
    int n, i;
    printf("Nhap so luong sinh vien (toi da 50): ");
    scanf("%d", &n);
    getchar();
    for(i = 0; i < n; i++) {
        students[i].id = i + 1;
        printf("Nhap thong tin cho sinh vien %d:\n", students[i].id);
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        getchar();  
        printf("So dien thoai: ");
        fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
        students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0'; 
    }
    printf("\nThong tin cac sinh vien:\n");
    for(i = 0; i < n; i++) {
        printf("Sinh vien %d: Ten: %s, Tuoi: %d, So dien thoai: %s\n",
                students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

