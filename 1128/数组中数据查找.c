#include <stdio.h>
int main(){
	int arr[]={0,8,3,2,6,4,5,7,1,9};
	int i,j,val;
	printf("��������Ҫ���ҵ���:");
	scanf("%d",&val);
	for(i=0;i<=10;i++){
		if(arr[i]==val){printf("�ҵ��� �ڵ�%d��",i+1);
		return i;
		}
	}
	printf("û�ҵ�");
	return 0;
}
