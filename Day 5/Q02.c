#include<stdio.h>
int main(){
    int s,l,bre,ba,h,r;
    scanf("%d%d%d%d%d%d",&s,&l,&bre,&ba,&h,&r);
    printf("Area of square: %d\n",s*s);
    printf("Area of rectangle: %d\n",l*bre);
    printf("Area of triangle: %d\n",1/2*ba*h);
    printf("Area of circle: %d",3.14*r*r);
    return 0;
}