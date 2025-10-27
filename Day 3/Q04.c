#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	b=a%10;
	c=a/10;
	printf("Last digit:%d\nExcept last digit:%d",b,c);
	return 0;
}