#include<stdio.h>

int main()
{
	
	int number;

	int n;

	
	number=1;


	printf("Enter the value of N: ");
	scanf("%d",&n);

	
    do{
    	
    		if(number%2 != 0)
			printf("%d ",number);
		
		
		number++;
	}

	
	while(number<=n);
	{
		
	
	}

	return 0;
}	
