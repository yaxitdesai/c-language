#include<stdio.h>
#include<string.h>
int main(){
  
   char a[100];
   int i;
   printf("Enter the string: ");
   scanf("%s",a);
 
   for(i=0;i<=strlen(a);i++){
      if(a[i]>=97&&a[i]<=122)
         a[i]=a[i]-32;
   }
   printf("\n Upercase Form: %s",a);
   return 0;
}
