#include <stdio.h>
#include <math.h>

int main(){
    int n,i,d,c=0,count=0,sum=0;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count == 0){
        while(n>0){
            d = n%10;
            if(!((d==2) || (d==3) || (d==5) || (d==7))){
                printf("Not a Perfect Prime");
                exit();
            }
            sum += d;
            n /= 10;
        }
        for(i=2;i<=sqrt(sum);i++){
            if(sum%i == 0){
                c++;
            }
        }
        if(c==0){
            printf("Perfect Prime");
        }else{
            printf("Not a Perfect Prime");
        }
    }else{
        printf("Not a Perfect Prime");
    }
    return 0;
}