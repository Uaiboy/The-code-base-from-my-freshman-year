#include <stdio.h>

int main() {
	int ages[] = {18, 16, 19, 17, 20};
	int max = ages[0], ele;
	for (int i = 1; i < 5; i++) {
		if (max < ages[i]) {

			max = ages[i];
			ele = i;
		}
	}
	printf("���ֵ��%d,�ڵ�%d��Ԫ��", max, ele + 1);
}