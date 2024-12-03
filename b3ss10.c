#include <stdio.h>
int main () {
	int i;
	int j;
	int arr[5]={4,6,9,1,7};
    for (i=0; i<5 ; i++) {
    	int minindex = i;
    	for (j=i+1; j<5; j++){
    		if (arr[j]<arr[minindex]){
    			minindex = j;
			}
		}
		if (minindex != i){
			int temp;
			temp=arr[minindex];
			arr[minindex]=arr[i];
			arr[i]=temp;
		}
	}
	for (i=0; i<5; i++){
		printf ("%d \t", arr[i]);
	}
	return 0;
}
