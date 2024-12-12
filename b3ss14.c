#include <stdio.h>
int main () {
	int i;
	char text []= "xin chao";
	
	int length = strlen (text);
	for (i=length; i>0; i--) {
		printf ("%s\n", text[i]);
	}
	
	return 0;
}
