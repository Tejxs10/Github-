#include <stdio.h>

int evenOrodd(int a){
    if(a%2 == 0)
        return 1;
    else
        return 0;
}

int main(){
    int a;
    scanf("%d",&a);
    (evenOrodd(a))?printf("Even"):printf("Odd");
    return 0;
}