#include <stdio.h>

int main() {
    float l,w,s,h,b,r;
    printf("enter lenght and width of rectangle: ");
    scanf("%f %f",&l,&w);
    printf("\narea of rectangle: %.2f/n",(l*w));
     printf("\nenter side of square: ");
    scanf("%f",&s);
     printf("\narea of square:%.2f",(s*s));
     printf("\nenter heigth and base of triangle: ");
    scanf("%f %f",&h,&b);
     printf("\narea of triangle:%.2f",((h*b)/2));
     printf("\nenter radius of circle: ");
    scanf("%f",&r);
     printf("\narea of circle:%.2f",(3.14*r));
    return 0;
}