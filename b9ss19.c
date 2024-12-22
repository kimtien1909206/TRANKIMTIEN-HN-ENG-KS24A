#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
void displayStudents(Student students[], int currentLength) {
    if (currentLength == 0) {
        printf("Danh sach sinh vien rong.\n");
        return;
    }
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
void addStudent(Student students[], int *currentLength) {
    if (*currentLength >= MAX_STUDENTS) {
        printf("Danh sach sinh vien da day.\n");
        return;
    }   
    Student newStudent;
    printf("Nhap id sinh vien: ");
    scanf("%d", &newStudent.id);
    getchar();
    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    getchar();
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = '\0';

    students[*currentLength] = newStudent;
    (*currentLength)++;
    printf("Sinh vien da duoc them.\n");
}

void editStudent(Student students[], int currentLength) {
    int id;
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < currentLength; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Nhap ten moi sinh vien: ");
            getchar();
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = '\0';

            printf("Nhap tuoi moi sinh vien: ");
            scanf("%d", &students[i].age);
            getchar();

            printf("Nhap so dien thoai moi sinh vien: ");
            fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
            students[i].phoneNumber[strcspn(students[i].phoneNumber, "\n")] = '\0';

            printf("Thong tin sinh vien da duoc cap nhat.\n");
            break;
        }
    }

    if (!found) {
        printf("Sinh vien co id %d khong ton tai.\n", id);
    }
}

void deleteStudent(Student students[], int *currentLength) {
    int id;
    printf("Nhap id sinh vien can xoa: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < *currentLength; i++) {
        if (students[i].id == id) {
            found = 1;
            for (int j = i; j < *currentLength - 1; j++) {
                students[j] = students[j + 1];
            }
            (*currentLength)--;
            printf("Sinh vien co id %d da duoc xoa.\n", id);
            break;
        }
    }

    if (!found) {
        printf("Sinh vien co id %d khong ton tai.\n", id);
    }
}

void searchStudent(Student students[], int currentLength) {
    int id;
    printf("Nhap id sinh vien can tim: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < currentLength; i++) {
        if (students[i].id == id) {
            found = 1;
            printf("Sinh vien tim thay: ID: %d, Name: %s, Age: %d, Phone: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
            break;
        }
    }

    if (!found) {
        printf("Sinh vien co id %d khong ton tai.\n", id);
    }
}

void sortStudentsByName(Student students[], int currentLength) {
    Student temp;
    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = i + 1; j < currentLength; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Danh sach sinh vien da duoc sap xep theo ten.\n");
}

int main() {
    Student students[MAX_STUDENTS];
    int currentLength = 0;
    int choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Hien thi danh sach sinh vien\n");
        printf("2. Them sinh vien\n");
        printf("3. Sua thong tin sinh vien\n");
        printf("4. Xoa sinh vien\n");
        printf("5. Tim kiem sinh vien\n");
        printf("6. Sap xep danh sach sinh vien\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayStudents(students, currentLength);
                break;
            case 2:
                addStudent(students, &currentLength);
                break;
            case 3:
                editStudent(students, currentLength);
                break;
            case 4:
                deleteStudent(students, &currentLength);
                break;
            case 5:
                searchStudent(students, currentLength);
                break;
            case 6:
                sortStudentsByName(students, currentLength);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le.\n");
        }
    }
}

