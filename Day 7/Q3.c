#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    if(m>=80)
    printf("A Grade ");
    else if(m>=60)
    printf("B Grade");
    else if(m>=40)
    printf("C Grade");
    else
    printf("Fail");
    return 0;
    
}