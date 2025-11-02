#include<stdio.h>
int main(){
    int n,last,re,prev;
    scanf("%d",&n);
    while(n!=0){
        last=n%10;
        re=n/10;
        prev=re%10;
        if(last<prev){
            printf("Not in ascending order");
            return 0;
        }
        n/=10;
    }
    printf("In Ascending Order");
    return 0;
}