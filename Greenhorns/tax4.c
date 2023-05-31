#include<stdio.h>

int main(){
	
	int a;
	int b;
	
	
	printf("Enter Velue Of A :");
	scanf("%d",&a);
	
	
	printf("Enter Velue Of B :");
	scanf("%d",&b);
	
	
	
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	
	
	printf("A : %d \n",a);
	 printf("B : %d",b);
	
	
	
}
