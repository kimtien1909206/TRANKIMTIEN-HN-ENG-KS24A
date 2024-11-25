#include <stdio.h>
int main () {
	int num = 20;
	int num1;
	do {
		printf ("nhap vao mot so (so cho truoc %d): ", num);
		scanf ("%d", &num1 );
	} while (num1 != num ) ;
	printf ("ban da nhap dung so %d\n", num );
    return 0;
    }
    
