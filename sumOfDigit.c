#include <stdio.h>
#include <ctype.h>

int main(){
    char a[10];
    int i,d,sum=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        if(isdigit(a[i])){
            d = a[i] - '0';
            sum += d;
        }
    }
    printf("%d",sum);
    return 0;
}