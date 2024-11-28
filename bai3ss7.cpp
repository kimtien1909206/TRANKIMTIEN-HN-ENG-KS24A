#include <stdio.h>
int main () {
	int i;
	int num[] = {2, 3, 4, 29, 55};
	int flag =1; 
	for (i=0; i < sizeof(num)/sizeof(num[0]); i++) {
		if (num[i] % 2 ==0) {
			flag++;
			printf ("so chan trong num %d ", num [i]);
		}
	}
	if (flag == 1){
		printf ("trong mang num khong co so chan ");
	}	
	return 0;
}
