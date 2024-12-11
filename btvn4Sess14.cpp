#include<stdio.h>
#include <string.h>

int main(){
	int m=0;
	char n;
	char str[14]="Quang Huy dhz";
	str[strcspn(str,"\n")]='\0';
	printf("nhap vao ky tu muon kiem tra: ");
	scanf("%c",&n);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==n){
			m++;
		}
	}
	if(m==0){
		printf("ky tu ban tim kiem khong co trong chuoi.");
	}else{
		printf("%c xuat hien %s lan",n,m);
	}
	return 0;
}
