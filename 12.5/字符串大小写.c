#include <stdio.h>
#include <string.h>
int main(){
	char a[20];
	printf("������һ���ַ���:");
	gets(a);
	printf("�ַ�����д:%s",strupr(a));
	printf("�ַ���Сд:%s",strlwr(a));
	return 0;
}
