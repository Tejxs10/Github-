#include <stdio.h>
#include <math.h>

int isprime(int a){
    int i,count=0;
    for(i=2;i<=sqrt(a);i++)
        if(a%2 == 0)
            return 0;
    return 1;
}

int sumOfDigits(int a){
    int sum=0;
    while(a>0){
        sum += a%10;
        a /=10;
    }
    return sum;
}

int eachDigitisprime(int a){
    int r;
    while(a>0){
        r = a%10;
        if(!(r==2 || r==3 || r==5 || r==7))
            return 0;
        a /= 10;
    }
    return 1;
}

int isPerfectPrime(int a){
    int sum;
    if(isprime(a)){
        sum = sumOfDigits(a);
        if(isprime(sum)){
            if(eachDigitisprime(a)){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int x;
    scanf("%d",&x);
    (isPerfectPrime(x))?printf("Perfect Prime"):printf("Not Perfect Prime");
    return 0;
}