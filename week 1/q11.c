#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d\n",&n);
	char str[n];
	scanf("%[^\n]",str);
	int l=strlen(str);
	for(int i=0;i<l-1;i++){
		for(int j=i+1;j<l-1;j++){
			if(str[i]==str[j]){
				printf("%c",str[i]);
				return 0;
			}
		}
	}
	printf("no repeating character");
	return 0;
}