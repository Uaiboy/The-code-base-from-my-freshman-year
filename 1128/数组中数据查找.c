#include <stdio.h>
int main(){
	int arr[]={0,8,3,2,6,4,5,7,1,9};
	int i,j,val;
	printf("请输入你要查找的数:");
	scanf("%d",&val);
	for(i=0;i<=10;i++){
		if(arr[i]==val){printf("找到了 在第%d个",i+1);
		return i;
		}
	}
	printf("没找到");
	return 0;
}
