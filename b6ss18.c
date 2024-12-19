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
    struct Student newStudent;
    printf("Nhap thong tin sinh vien can them:\n");
    newStudent.id = n + 1; 
    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';  
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    getchar(); 
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0'; 
    students[n] = newStudent;
    n++;  
    printf("\nDanh sach sinh vien sau khi them moi:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n", 
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

