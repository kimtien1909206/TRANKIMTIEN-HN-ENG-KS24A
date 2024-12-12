#include <stdio.h>
/*
truy xuat cac phan tu trong string 
*/
int main () {
	int i;
	char fullname []="Vu Hong Van ";
	// in ra cac phan tu trong chuoi fullname;
	/*
	+ tinh duoc trong chuoi fullname co bao nhiieu chuoi ki tu 
	+ dung for de duyet qua cca phan tu trong chuoi fullname,
	
	*/
	int size = strlen(fullname);
	printf ("so ki tu la: %d\n",size);
	for (i=0; i<size; i++) {
		printf ("ki tu thu %d la %c\n", i+1, fullname[i]);
	}
	return 0;
}
