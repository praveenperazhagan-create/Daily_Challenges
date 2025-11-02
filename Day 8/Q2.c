#include<stdio.h>
 int main(){
 	int n;
 	scanf("%d",&n);
 	int lastDigit,nextDigit,ascending=1;
 	while (n>9){
 		lastDigit=n%10;
 		nextDigit=(n/10)%10;
 		if(lastDigit<nextDigit){
 			ascending=0;
 			break;
		 }
		 n=n/10;
	 }
	 if (ascending)
	 printf("Digits are in ascending order");
	 else
	 printf("Digits are not in ascending order");
	 return 0;	 
 }
