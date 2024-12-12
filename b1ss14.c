#include <stdio.h>
/* chuoi ( string )
ban chat la mang chua nhieu ki tu.
I cach khai bao 
*/
int main () {
	//char fullname[]="vu Hong Van ";
	//printf ("%s", fullname);
	// khai bao string cho nguoi dung nhap 
	char fullname[100];
	printf ("moi nhap ten day du cua ban :");
	//scanf ("%s", fullname);
	//Ham scanf chi nhan gia chi den dau space.
	/*
	1 dung ham gets() 
	2 dung ham fgets()
	 */
	 //gets(fullname);
	 fgets (fullname, 100, stdin);
	printf ("ten cua ban: %s", fullname);
	
	
	
	
	
	return 0;
}
