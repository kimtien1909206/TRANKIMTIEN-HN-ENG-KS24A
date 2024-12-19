#include <stdio.h>
#define MAX_STUDENTS 50
struct Student {
    int id;            
    char name[50];    
    int age;          
    char phoneNumber[15];
};
int main() {
    struct Student students[MAX_STUDENTS] = {
        {1, "Nguyen Anh", 20, "0123456789"},
        {2, "Tran Minh", 21, "0987654321"},
        {3, "Le Thi Mai", 22, "0123987456"},
        {4, "Phan Hoang", 23, "0192837465"},
        {5, "Doan Lan", 24, "0123456123"}
    };
    int n = 5;  
    int searchId, i;
    printf("Nhap ID sinh vien can sua: ");
    scanf("%d", &searchId);
    getchar(); 
    int found = 0; 
    for (i = 0; i < n; i++) {
        if (students[i].id == searchId) {
            found = 1;
            printf("Sinh vien tim thay: %s, Tuoi: %d, So dien thoai: %s\n", 
                   students[i].name, students[i].age, students[i].phoneNumber);
            printf("Nhap lai ten moi: ");
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';  // Loai bo ky tu xuong dong
            printf("Nhap lai tuoi moi: ");
            scanf("%d", &students[i].age);
            getchar();  
            printf("Thong tin sinh vien sau khi sua:\n");
            printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n", 
                   students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien voi ID: %d\n", searchId);
    }
    printf("\nDanh sach sinh vien sau khi sua:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n", 
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

