#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("positive");
    }
    else if(a<0){
        printf("nrgative");
    }
    else{
     printf("zero");   
    }
   
    return 0;
}