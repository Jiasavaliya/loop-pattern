#include<stdio.h>
main(){
	char r='A';
	char c='E';
	
	
	for(r='A'; r<='E'; r++){
	for(c='A'; c<=r; c++){
		printf("%c",c);
	}
	printf("\n");
}
}

