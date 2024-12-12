#include <stdio.h>
/*
khai bao va gan gia tri cho 1 chuoi bat ki
+ dem so luong ki tu la chu cai
+ dem so ki tu la chu so
+ dem so ki tu la ki tu dac biet
INPUT : hfdf23@r4r!
OUTPUT :
+ 6 ki tu chu cai 
+ 3 ki tu la chu so 
+ 2 ki tu la chu cai dac biet

*/
int main () {
	int i;
char str[100]= "Hello my gmail is test123@gmail.com";
int countCharacter =0, countCharacterNumber =0, countCharacterspecial=0;
int size = strlen(str);
for (i=0; i< size; i++) {
	if (str[i]>='a'&& str[i]<='z'|| str[i]>='A' && str[i] <= 'z') {
		countCharacter++;
	} else if (str[i]>= '0' && str[i] <= '9') {
		countCharacterNumber ++;
	} else {
		countCharacterspecial++;
	}
}
 printf ("so ki tu trong chuoi la: %d\n", countCharacter );
 printf ("so ki tu la chu so trong chuoi la : %d\n", countCharacterNumber);
 printf ("so ki tu la ki tu dac biet trong chuoi la : %d\n",  countCharacterspecial);
return 0;
}
