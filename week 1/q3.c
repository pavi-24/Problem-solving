#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int pc=0,nc=0,zc=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			pc++;
		}
		else if(arr[i]<0){
			nc++;
		}
		else{
			zc++;
		}
	}
	printf("Positive %d\nNegative %d\nzero %d",pc,nc,zc);
	return 0;
}