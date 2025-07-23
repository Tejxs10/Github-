#include <stdio.h>
#include <ctype.h>

int main(){
    char a[10];
    int i,d,s,sum=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        if(isdigit(a[i])){
            s=0;
            while(isdigit(a[i])){
                d = a[i] - '0';
                s = (s*10) + d;
                i++;
            }
            sum += s;
        }
    }
    printf("%d",sum);
    return 0;
}