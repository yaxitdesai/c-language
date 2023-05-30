#include<stdio.h>

int main(){
	
	int a;
	int b;
	int c;
	
	printf("Enter Velue Of A :");
	scanf("%d",&a);
	
	
	printf("Enter Velue Of B :");
	scanf("%d",&b);
	
	
	c = a;
	a = b;
	b = c;
	 
	printf("A : %d \n",a);
	printf("B : %d",b);
	 
	
	
	
	return 0;
	
}
