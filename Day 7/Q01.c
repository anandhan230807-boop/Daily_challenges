#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z')
        printf("Alphabet");
    else if(a>='0' && a<='9')
        printf("Digit");
    else
        printf("Not an Alphabet or Digit");
    return 0;
}