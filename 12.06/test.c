#include <stdio.h>
#include <string.h>

int main() {
	char s1[200], s2[200];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:");
	gets(s2);
	puts(s2);
	puts(s1);
	int i = 0;
	for (i = 0; s2[i] != '\0'; i++) {
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	puts(s1);
	puts(s2);
	return 0;
}