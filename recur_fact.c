#include <stdio.h>

int fact(n){
    if(n==1)
        return 1;
    else    
        return n*fact(n-1);
}

int main(){
    int n,f;
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
    return 0;
}