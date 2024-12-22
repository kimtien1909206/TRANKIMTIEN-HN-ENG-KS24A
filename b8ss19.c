#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

// Hàm s?p x?p sinh viên theo tên
void sortStudentsByName(Student students[], int length) {
    Student temp;
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
void printStudents(Student students[], int length) {
    for (int i = 0; i < length; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

int main() {
    Student students[MAX_STUDENTS] = {
        {1, "Nguyen A", 20, "0123456789"},
        {2, "Le B", 21, "0987654321"},
        {3, "Tran C", 22, "0123987654"},
        {4, "Pham D", 23, "0987012345"},
        {5, "Hoang E", 24, "0934123456"}
    };
    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, MAX_STUDENTS);
    sortStudentsByName(students, MAX_STUDENTS);
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    printStudents(students, MAX_STUDENTS);
    return 0;
}

