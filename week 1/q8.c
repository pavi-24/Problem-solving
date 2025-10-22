#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s",str);
	int l=strlen(str);
	for(int i=0;i<=l/2;i++){
		if(str[i]!=str[l-i-1]){
			printf("not palindrome");
			return 0;
		}
	}
	printf("palindrome");
	return 0;
}