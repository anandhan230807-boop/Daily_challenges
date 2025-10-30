 #include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
    printf("Greatest:%d\n",a);
         if(b<a && b<c)
    printf("Smallest:%d\n",b);
        else 
    printf("Smallest:%d\n",c);
        
    }

    else if(b>a && b>c){
    printf("Greatest:%d\n",b);
        if(a<b && a<c)
    printf("Smallest:%d\n",a);
      else 
    printf("Smallest:%d\n",c);
      
    }
    else if(c>a && c>b){
    printf("Greatest:%d\n",c);
         if(b<a && b<c)
    printf("Smallest:%d\n",b);
    else
    printf("Smallest:%d\n",a);

    }   
    
    else 
    printf("Equal");
    return 0;
}
