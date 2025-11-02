#include <stdio.h>
#include<math.h>
int main() {
    float a,b,c,d;
    scanf("%f %f",&a,&b);
    scanf("%f %f",&c,&d);
    float distance;
    distance=sqrt((c-a)*(c-a)+(d-b)*(d-b));
    printf("%.2f",distance);
    return 0;
}