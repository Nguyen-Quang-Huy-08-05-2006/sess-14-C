#include<stdio.h>
#include <string.h>

int main(){
	char str[100];
	printf("nhap vao 1 chuoi bat ky: ");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("chuoi %s va do dai chuoi %d",str,strlen(str));
	return 0;	
}
