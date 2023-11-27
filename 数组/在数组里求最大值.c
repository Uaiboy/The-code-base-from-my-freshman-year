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
	printf("最大值是%d,在第%d个元素", max, ele + 1);
}