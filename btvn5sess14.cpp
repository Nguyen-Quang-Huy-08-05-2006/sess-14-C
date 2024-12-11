#include <stdio.h>
#include <string.h>

int main(){
    char str[13]="Quang Huy dz";
    int m=1,n;
    for(int i=0;i<strlen(str);i++){
    	if(str[i]==' '){
    		m++;
		}
	}
	printf("chuoi: %s\n",str);
	printf("moi ban dem so tu trong chuoi: ");
	scanf("%d",&n);
	if(n==m){
		printf("so tu trong chuoi la %d, ban dem dung roi",m);
	}else{
		printf("so tu trong chuoi la %d, ban dem sai roi",m);
	}
    
    return 0;
}
