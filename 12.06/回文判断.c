#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("������һ���ַ���:");
	gets(str);
	/*
	int l = 0, r = strlen(str) - 1;
	while (l < r) {
		if (str[l] != str[r]) {
			printf("%s ���ǻ���", str);
			break;
		}
		l++;
		r--;
	}
	if (l >= r) {
		printf("%s �ǻ���", str);
	}
	*/
	int l = strlen(str) / 2, r = strlen(str) / 2;
	if (strlen(str) % 2 != 0) {
		r += 2;
	}
	while (l >= 0) {
		if (str[r] != str[l]) {
			printf("%s ���ǻ���", str);
			break;
		}
		l--;
		r++;
	}
	if (l < 0) {
		printf("%s �ǻ���", str);
	}
	return 0;
}