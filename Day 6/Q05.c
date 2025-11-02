 #include<stdio.h>
 #include<ctype.h>
int main(){
     char a;
     scanf("%s",&a);
     if(a>='A' && a<='Z'){
        printf("Uppercase");
     }
     else if(a>='a' && a<='z'){
        printf("Lowerercase");
     }
    else if(0<=a<=0){
        printf("Digit");
    }
    else
        printf("Special Symbol");
    return 0;  
}