#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
void deleteStudent(int id, Student students[], int *currentLength) {
    int found = -1;
    for (int i = 0; i < *currentLength; i++) {
        if (students[i].id == id) {
            found = i;
            break;
        }
    }
    
    if (found == -1) {
        printf("Sinh vien co id %d khong ton tai trong danh sach.\n", id);
        return;
    }
    for (int i = found; i < *currentLength - 1; i++) {
        students[i] = students[i + 1];
    }
    (*currentLength)--;
    printf("Sinh vien co id %d da duoc xoa.\n", id);
}
void printStudents(Student students[], int currentLength) {
    if (currentLength == 0) {
        printf("Danh sach sinh vien rong.\n");
        return;
    }
    
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int main() {
    Student students[MAX_STUDENTS];
    int currentLength = MAX_STUDENTS; 
    students[0] = (Student){1, "Nguyen A", 20, "0123456789"};
    students[1] = (Student){2, "Le B", 21, "0987654321"};
    students[2] = (Student){3, "Tran C", 22, "0123987654"};
    students[3] = (Student){4, "Pham D", 23, "0987012345"};
    students[4] = (Student){5, "Hoang E", 24, "0934123456"};
    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, currentLength);
    int idToDelete;
    printf("Nhap id sinh vien can xoa: ");
    scanf("%d", &idToDelete);
    deleteStudent(idToDelete, students, &currentLength);
    printf("\nDanh sach sinh vien sau khi xoa:\n");
    printStudents(students, currentLength);
    return 0;
}




