#include<stdio.h>
int main(){
	
	int r , c ;
	
	for(r=1 ; r<=5 ; r++){
		
		
		
		for(c=r ; c>=1 ; c--){
			
			if(c%2==0){
				
				
			  printf("-");
			}
			else{
				printf("|");
			}
			
			
			
			
			
		}
		printf("\n");
	}
	
	
	
	return 0;
}
