#include <stdio.h>

int main() {
	int arr[5] = {5, 6, 2, 8, 1};
	int ave,i;
	for ( i = 0; i < 5; i++){
		ave += arr[i];
	}

	float arg;arg=(float)ave/5;
	printf("�����ܺ�Ϊ%dƽ��ֵΪ%f",ave,arg);
}
