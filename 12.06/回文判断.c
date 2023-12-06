#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("请输入一个字符串:");
	gets(str);
	/*
	int l = 0, r = strlen(str) - 1;
	while (l < r) {
		if (str[l] != str[r]) {
			printf("%s 不是回文", str);
			break;
		}
		l++;
		r--;
	}
	if (l >= r) {
		printf("%s 是回文", str);
	}
	*/
	int l = strlen(str) / 2, r = strlen(str) / 2;
	if (strlen(str) % 2 != 0) {
		r += 2;
	}
	while (l >= 0) {
		if (str[r] != str[l]) {
			printf("%s 不是回文", str);
			break;
		}
		l--;
		r++;
	}
	if (l < 0) {
		printf("%s 是回文", str);
	}
	return 0;
}