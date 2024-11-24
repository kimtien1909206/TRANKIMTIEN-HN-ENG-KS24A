#include <stdio.h>
int main () {
	int num;
	// yeu cau nhap vao so nguyen 
	printf("nhap vao so nguyen: ");
	scanf("%d", &num);
	if (num % 3 == 0) {
		printf("so nguyen chia het cho 3\n");
	}
	else if (num % 5 == 0) {
		printf ("so nguyen chia het cho 5\n");
	}
	else if (num % 3 ==0 && num % 5 == 0 ) {
		printf ("so nguyen chia het cho ca 3 va 5\n");
	}
	else {
		printf ("so khong chia het cho 3 hoac 5\n");
	}
	return 0;
	}
	
