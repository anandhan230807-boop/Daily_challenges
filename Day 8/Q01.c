#include<stdio.h>
int main(){
    int n,min=9,max=0,l;
    scanf("%d",&n);
    while(n!=0){
        l=n%10;
        if(l>max)
            max=l;
        else if(l<min)
            min=l;
        n=n/10;
    }
    printf("Max:%d\n",max);
    printf("Min:%d",min);
    return 0;
}