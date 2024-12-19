#include <stdio.h>
struct SinhVien{
	// liet ke cac thong tin cua struct
	char fullName[50];
	char phoneNumber[15];
	char age [50];
};
// dot operator
int main () {
	struct SinhVien std1={"Vu Hong Van","0353939032","26"};
	printf ("ten sinh vien la : %s\n",std1.fullName);
	printf ("so dien thoai sinh vien la: %s \n", std1.phoneNumber);
	printf ("tuoi cua sinh vien la : %s\n", std1.age);
return 0;
}

