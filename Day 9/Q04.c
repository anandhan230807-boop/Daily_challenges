#include<stdio.h>
int main(){
    int a,b;
    int gcd,lcm;
    scanf("%d%d",&a,&b);
    int n1=a,n2=b;
    while(n2!=0){
        int temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    gcd=n1;
    lcm=(a*b)/gcd;
    printf("GCD:%d\nLCM:%d",gcd,lcm);
    return 0;
}