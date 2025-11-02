#include<stdio.h>
int main() {
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
    if (a>b&&a>c){
        printf("greatest:%d",a);
    }
    else if (b>a&&b>c){
        printf("greatest:%d",b);
    }
    else {
        printf("greates:%d",c);
    }
    if(a<b&&a<b){
    	 printf("\nsmallest:%d",a);
	}
	else if(b<a&&b<c){
		 printf("\nsmallest:%d",b);
	}
	else{
		 printf("\nsmallest:%d",c);
	}
    return 0;
}
