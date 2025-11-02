#include<stdio.h>
int main(){
	int a,p,t;
	float si;
	scanf("%d%d%d",&a,&p,&t);
	if(t>12)
	t=t/12;
	si=(a*p*t)/100;
	printf("%.2f",si);
	return 0;
}