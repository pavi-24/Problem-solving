#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	scanf("%s",str);
	int l=strlen(str);
	for(int i=0;i<l;i++){
		if(islower(str[i])){
			str[i]=toupper(str[i]);
		}
		else{
			str[i]=tolower(str[i]);
		}
	}
	printf("%s",str);
	return 0;
}