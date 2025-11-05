#include <stdio.h>
#include<math.h>

int main()
{
    int n,sum=0,c=0;
    scanf("%d",&n);
    int n1=n;
    int temp=n;
    while(n1!=0){
        int l=n1%10;
        if(n1!=0)
           c++;
        n1/=10;
    }
    int last,lp;
    while(n!=0){
        last=n%10;
        lp=pow(last,c);
        sum+=lp;
        n/=10;
    }
    if(sum==temp){
        printf("Armstrong Number");
    }
    else
        printf("Not Armstrong Number");

    return 0;
}