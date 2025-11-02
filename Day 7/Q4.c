#include<stdio.h>
 int main(){
 	int month;
 	printf("enter month number: ");
 	scanf("%d",&month);
 	switch(month){
 		case 1:
 		case 2:
 		case 12:
		 printf("season:Winter\n");
		 break;
		case 3:
		case 4:
		case 5:
		 printf("season:Spring\n");
		 break;
		case 6:
		case 7:
		case 8:
		 printf("season:Summer\n");
		 break;
		case 9:
		case 10:
		case 11:
		 printf("season:Autumn\n");
		 break;
		 
		default:
		 	printf("Invalid month number!");
	 }
	 return 0;
 }
