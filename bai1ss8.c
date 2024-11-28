#include <stdio.h>
int main () {
	int i;
	int num [] = {1,3,5,7,9};
	int n = sizeof(num) / sizeof(num[0]);
	printf ("cac phan tu cua mang tu lon den be : ");
	for (i= n - 1;i >= 0; i --){
		printf ("%d", num[i]);
	}
	printf ("\n");

	return 0;
	}
