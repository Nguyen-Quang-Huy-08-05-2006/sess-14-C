#include <stdio.h>
#include <string.h>

int main(){
	char str[100]="6 7 8 9 song bang tinh cam";
	int n=0,m=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='a'||str[i]<='z'){
			n++;
		}
	}
	printf("chuoi: [%s]\n",str);
	printf("moi ban dem so ky tu la chu cai trong chuoi: ");
	scanf("%d",&m);
	if(n==m){
		printf("so chu cai trong chuoi la %d, ban dem dung roi",n);
	}else{
		printf("so chu cai trong chuoi la %d, ban dem sai roi",n);
	}	
	
	return 0;
}
