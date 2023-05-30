#include<stdio.h>
int main(){
	
	int b_s , hra , da , ta , g_s ;
	
	printf("Enter your B.S. :");
	scanf("%d",&b_s);
	
	hra = (10 * b_s) / 100 ;
	da = (5 * b_s) / 100 ;
	ta = (8 * b_s) / 100 ;	
	 g_s = b_s + hra + da + ta ;
	 
	 printf("G.S.: %d",g_s);
	
}
