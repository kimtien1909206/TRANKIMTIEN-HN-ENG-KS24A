#include <stdio.h>
int main () {
	int arr[5]={3,8,4,1,7};
	int i;
	int j;

	for (i=0; i<5; i++){
		for (j=0; j<5-i-1; j++) {
		
			if (arr[j] > arr[j+1]){
				int temp;
				temp = arr [j];
				arr[j]=arr[j+1];
				arr [j+1]=temp;
			}
		}
	}
	for (i=0;i<5; i++) {
			printf ("%d \t", arr[i]);
	}
	return 0;
}
