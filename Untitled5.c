#include <stdio.h>
int main () {
	// yeu cau nhap vao ba so nguyen
	int a;
	int b;
	int c;
	printf("nhap vao so nguyen thu nhat (a) ");
	scanf("%d", &a);
	printf("nhap vao so nguyen thu hai (b) ");
	scanf("%d", &b);
	printf("nhap vao so nguyen thu ba (c) ");
	scanf("%d", &c);
	if (a <= c && c <= b || b <= c && c <= a ) {
		printf ("so thu ba (c) nam giua trong khoang so thu nhat (a) va so thu hai (b)");
	}
	else {
		printf ("so thu ba (c) khong nam giua trong khoang so thu nhat (a) va so thu hai (b)");
	}
	return 0;
	}
	
	
