#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i;
	scanf("%d",&n);
	char arr[n];
	for(i=0;i<n;i++){
		scanf("%x",&arr[i]);
		long int dec =strtol(arr, NULL, 16);
		printf("%d\n",dec);
	}
	return 0;
}
