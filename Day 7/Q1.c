#include<stdio.h>
int main(){
	char ch;
	scanf("%c0",&ch);
	if (ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){
		printf("%c is a Alphabet",ch);
	}
	else if(ch>='0'&&ch<='9'){
		printf("%c is a digit",ch);
	}
	else{
		printf("%c is not alphabet or digit",ch);
	}
	return 0;
}
