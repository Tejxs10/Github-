#include <stdio.h>

int noOfFibonacci(int s, int e){
    int count=0,a=0,b=1,c;  
    while(a+b < s){
        c=a+b;
        a=b;
        b=c;
    }
    while(a+b <= e){
        c=a+b;
        a=b;
        b=c;
        count++;
    }
    return count;
}

int main(){
    int s,e,res;
    scanf("%d%d",&s,&e);
    res = noOfFibonacci(s,e);
    printf("%d",res);
    return 0;
}