
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
	
        printf("your value  is an alphabet.");
        
        
		}
		else if(c>='0' && c>='9'){
			
			
			printf("your value is number");
		}
	    
		
    else{
	
        printf("your value is special char.");
}
    return 0;
}
