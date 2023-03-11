#include<stdio.h>
main(){
	int r,c;
	int count=1;
	
	for(r=1; r<=5; r++){
	for(c=1; c<=r; c++){
		printf("%d",count);
		count++;
	}
	printf("\n");
}
}
