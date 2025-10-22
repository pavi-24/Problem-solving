#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	scanf("%s",str);
	int l=strlen(str);
	int v=0,c=0;
	for(int i=0;i<l;i++){
		if(str[i]=='a' || str[i]=='A' || str[i]=='E' || str[i]=='e'|| str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'){
			v++;
		}
		else{
			c++;
		}
	}
	printf("vowels=%d\nconstant=%d",v,c);
	return 0;
	
}