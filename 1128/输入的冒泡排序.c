#include <stdio.h>
int main(){
	int n,t,j,i;
	printf("请输入数组的大小:");
	scanf("%d",&n);
	printf("请输入数组的元素:");
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-2;i++)
		for(j=0;j<=n-2-i;j++){
			if(arr[j]>arr[j+1]) {
				t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;
			}
		}
	for(i=0;i<=n-1;i++)
		printf("%d ",arr[i]);
	return 0;
} 
