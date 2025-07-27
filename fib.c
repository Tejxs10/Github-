#include <stdio.h>

int main(){
    int a=0,b=1,c=0,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(int i=0;a+b<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}