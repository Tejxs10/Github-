#include <stdio.h>
#include <math.h>

int main(){
    int s,e,i,d,temp,c,count,sum;
    scanf("%d%d",&s,&e);
    printf("The prime numbers are: ");
    while(s<=e){
        count=0;
        if(s==1)
            continue; 
        for(i=2;i<=sqrt(s);i++){
            if(s%i == 0){
                count++;
            }
        }
        if(count == 0){
            temp = s;sum =0;
            while(temp>0){
                d = temp%10;
                if(!((d==2) || (d==3) || (d==5) || (d==7))){
                    break;
                }
                sum += d;
                temp /= 10;
            }
            c=0;
            for(i=2;i<=sqrt(sum);i++){
                if(sum%i == 0){
                    c++;
                }
            }
            if(c==0){
                printf("%d ",s);
            }
        }
        s++;
    }
    return 0;
}