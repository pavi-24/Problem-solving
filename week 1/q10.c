#include<stdio.h>
int main(){
	int n;
	scanf("%d\n",&n);
	char str[n];
	scanf("%[^\n]",str);
	int cw=1;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			cw++;
		}
	}
	printf("%d",cw);
	return 0;
}