#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0,last;
    int t=n;
    while(t!=0){
        last=t%10;
        rev=rev*10+last;
        t/=10;
    }
    if(n==rev)
       printf("Palindrome");
    else
       printf("Not Palindrome");      
    return 0;
}