#include<stdio.h>
 int main(){
 	int n;
 	scanf("%d",&n);
 	if(n>=80&&n<=100){
 		printf("A");
	 }
	 else if (n>=60&&n<=79){
	 	printf("B");
	 }
	 else if(n>=40&&n<=59){
	 	printf("C");
	 }
	 else if(n<39){
	 	printf("FAIL");
	 }
	 return 0;
 }
