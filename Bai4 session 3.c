#include <stdio.h>

int main() {
    float math, literature, english, total, average;
    // Yeu cau nguoi dung nhap diem cac mon
    printf("Vui long nhap diem mon Toan: ");
    scanf("%f", &math);
    printf("Vui long nhap diem mon Van: ");
    scanf("%f", &literature);
    printf("Vui long nhap diem mon Anh: ");
    scanf("%f", &english);
    // Tinh tong diem và diem trung binh
    total = math + literature + english;
    average = total / 3;
    // In ket qua tong diem và diem trung bình voi 2 chu so thap phan
    printf("Tong diem: %.2f\n", total);
    printf("Ðiem trung binh: %.2f\n", average);
    return 0;
}

