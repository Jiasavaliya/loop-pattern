#include<stdio.h>
main(){
	char r,c;
	char a='A';

	
	for(r=1; r<=5; r++){
	for(c=1; c<=r; c++){
		printf("%c",a);
		a++;
	}
	printf("\n");
}
}
