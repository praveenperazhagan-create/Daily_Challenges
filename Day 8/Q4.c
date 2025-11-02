#include<stdio.h>
 int main(){
 	int n;
 	scanf("%d",&n);
 	int sum=0,count=0,digit;
 	long product=1;
 	if (n==0){
 		count=1;
 		sum=0;
 		product=0;
	 }
	 else{
	 	while (n!=0){
	 		digit=n%10;
	 		sum+=digit;
	 		product*=digit;
	 		count++;
	 		n/=10;
		 }
	 }
	 printf("Count:%d\n",count);
	 printf("Sum:%d\n",sum);
	 printf("Product:%ld",product);
	 return 0;
 }
