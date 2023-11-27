#include <stdio.h>

int main() {
	int ages[] = {18, 16, 19, 17, 20};
	int min = ages[0], ele;
	for (int i = 1; i < 5; i++) {
		if (min > ages[i]) {

			min = ages[i];
			ele = i;
		}
	}
	printf("最小值是%d,在第%d个元素", min, ele + 1);
}