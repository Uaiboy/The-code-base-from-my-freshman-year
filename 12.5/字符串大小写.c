#include <stdio.h>
#include <string.h>
int main(){
	char a[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:");
	gets(a);
	printf("×Ö·û´®´óĞ´:%s",strupr(a));
	printf("×Ö·û´®Ğ¡Ğ´:%s",strlwr(a));
	return 0;
}
