#include <stdio.h>
struct SinhVien{
	char fullName[50];
	char phoneNumber[15];
	char age [50];
};
int main () {
	struct SinhVien std1={"Vu Hong Van","0353939032","26"};
	printf ("moi ban nhap ten: ");
	fgets (SinhVien.fullName,sizeof (SinhVien.fullName),stdin);
	printf ("moi ban nhap sdt:");
	fgets (SinhVien.phoneNumber,sizeof (SinhVien.phoneNumber ), stdin);
	printf ("moi ban nhap tuoi: ");
	fgets (SinhVien.age,sizeof (SinhVien.age ), stdin);
	printf ("ten sinh vien: %s \n",SinhVien.fullName );
	printf ("sdt sinh vien: %s \n",SinhVien.phoneNumber);
	printf ("tuoi sinh vien: %s \n",SinhVien.age );
return 0;
}

