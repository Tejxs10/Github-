#include <stdio.h>
#include <math.h>

int prime(int a){
    int i,count=0;
    for(i=2;i<=sqrt(a);i++)
        if(a%2 == 0)
            return 0;
    return 1;
}

int main(){
    int a;
    scanf("%d",&a);
    (prime(a))?printf("Prime"):printf("not Prime");
    return 0;
}