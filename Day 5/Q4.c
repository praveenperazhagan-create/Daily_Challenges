#include <stdio.h>
#include<math.h>
int main() {
    float principal,rate,time;
    printf("enter principal: ");
    scanf("%f",&principal);
    printf("enter rate: ");
    scanf("%f",&rate);
    printf("enter time: ");
    scanf("%f",&time);
    float SI;
    SI=(principal*rate*time)/100;
    printf("%.2f",SI);
    return 0;
}