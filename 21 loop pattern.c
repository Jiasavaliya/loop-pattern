#include<stdio.h>
int main(){
	char r, c;
	char a='A';
	char e='E';
	for(r='A'; r<='E'; r++){
		for(c='A'; c<=r; c++){
			printf("%c",c);
		}
		printf("\n");
		
	}
	return 0;
}
