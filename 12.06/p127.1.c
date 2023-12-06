#include <stdio.h>
#include <string.h>

int main() {
	int a[10];
	int i = 0, j = 0, sum;
	float ave;
	printf("请输入10位学生的分数:");
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
	printf("平均分是%d 及格率%d%", ave, j);
	return 0;
}