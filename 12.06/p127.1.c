#include <stdio.h>
#include <string.h>

int main() {
	int a[10];
	int i = 0, j = 0, sum;
	float ave;
	printf("������10λѧ���ķ���:");
	for (i; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++) {
		if (a[i] >= 60)
			j++;
		sum += a[i];
	}
	ave = sum / 10.0;
	j *= 10;
	printf("ƽ������%d ������%d%", ave, j);
	return 0;
}