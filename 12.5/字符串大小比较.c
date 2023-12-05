#include <stdio.h>
#include <string.h>
int main(){
	char a[20],b[20];
	printf("请输入一个字符串:");
	gets(a);
	printf("请输入另一个:");
	gets(b);
	int res=strcmp(a,b);
	switch (res){
		case 0:printf("%s = %s",a,b);
		break;
		case 1:printf("%s > %s",a,b);
		break;
		default:printf("%s< %s",a,b); 
	} 
	return 0;`
} 
