//1 0 1 0 1
//0 1 0 1
//1 0 1
//0 1
//1
#include<stdio.h>
int main(){
	
	int r, c;
	
	for(r=5; r>=1; r--){
		for(c=r; c>=1; c--){
		
			if(c%2==0){
				printf("0",r);
			}
			else{
				printf("1",c);
			}
		}
		printf("\n");
	}
	return 0;
}
