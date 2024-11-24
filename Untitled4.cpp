#include <stdio.h>
int maint () {
	int num;
	printf("nhap vao so thang (1-12): ");
	scanf("%d", &num);
	if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12) {
		printf ("thang co 31 ngay\n" , num );
	}
	else if (num == 4 || num == 6 || num == 9 || num == 11) {
		printf ("thang %d co 30 ngay\n");
	}
	else if (num == 2 ) {
		printf ("thang %d có 28 hoac 29 ngay\n");
	}
	else {
		printf ("thang khong hop le\n");
	}
	return 0;
	}
