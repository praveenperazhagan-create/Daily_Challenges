#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	if (ch>='A'&&ch<='Z'){
		printf("%c is uppercase",ch);
	}
	else if(ch>='a'&&ch<='z'){
		printf("%c is lowercase",ch);
	}
	else if(ch<='0'&&ch<='9'){
		printf("%c is a digit",ch);
	}
	else{
		printf("%c is a special symbol");
	}
	return 0;
}
