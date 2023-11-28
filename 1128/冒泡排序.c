#include <stdio.h>
int main(){
	int t,j,i,arr[]={5,4,7,3,1,};
	for(i=0;i<=3;i++)
		for(j=0;j<=3-i;j++){
			if(arr[j]>arr[j+1]) {
				t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;
			}
		}
	for(i=0;i<=4;i++)
		printf("%d",arr[i]);
	return 0;
} 
