#include<stdio.h>
#include <string.h>

int main(){
	char str[13]="Quang Huy dz";
	str[strcspn(str,"\n")]='\0';
	for(int i=0;i<strlen(str);i++){
		printf("%c ",str[i]);
	}
	
	return 0;
}
