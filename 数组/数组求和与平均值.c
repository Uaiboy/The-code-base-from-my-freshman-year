#include <stdio.h>

int main() {
	int arr[5] = {5, 6, 2, 8, 1};
	int ave,i;
	for ( i = 0; i < 5; i++){
		ave += arr[i];
	}

	float arg;arg=(float)ave/5;
	printf("数组总和为%d平均值为%f",ave,arg);
}
