#include <stdio.h>
#include <string.h>
int main(){
	printf("请输入一个字符串:");
	char ch_a[18];
	gets(ch_a);
	puts(ch_a);
	printf("请输入另一个字符串:");
	char ch_b[10];
	gets(ch_b);
	strcat(ch_a,ch_b);
	printf("拼接后的效果:\n");
	puts(ch_a);
	puts(ch_b);
	return 0;
}
