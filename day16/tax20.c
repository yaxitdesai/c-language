#include<stdio.h>

int main(){
	
	int r,c,k;
	for(r=5; r>=1 ; r--){
		for(k=r;k<=4;k++){
			printf(" ");
		}
		for(c=r; c>=1 ; c--){
			if(c%2==0){
			
			printf("0");
		}
		else{
			printf("1");	
		}
		}
		printf("\n");
	}
	
	return 0;
}
