#include <stdio.h>
#include <string.h>
int main(){
	printf("������һ���ַ���:");
	char ch_a[18];
	gets(ch_a);
	puts(ch_a);
	printf("��������һ���ַ���:");
	char ch_b[10];
	gets(ch_b);
	strcat(ch_a,ch_b);
	printf("ƴ�Ӻ��Ч��:\n");
	puts(ch_a);
	puts(ch_b);
	return 0;
}
