#include<stdio.h>

int main(){

  int  a,b,c;

  printf("Enter a :");
	 scanf("%d",&a);
	 
  printf("Enter b :");
	 scanf("%d",&b);

  printf("Enter c :");
	 scanf("%d",&c); 
	 
   a>b ? a>c ?
	       printf("A is max")
		 
		   : 
		   printf("C is max") 
	:
	   b>c ?
	   
	      printf("B is max")
	       :
	      printf("C is max");
	      
	 return 0;     
}
