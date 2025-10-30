#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
    printf("Greatest:%d\n",a);
    printf("Smallest:%d\n",b);
    }
    else if(b>a){
    printf("Greatest:%d\n",b);
    printf("Smallest:%d\n",a);
    
    }
    else 
    printf("Equal");
    return 0;
}