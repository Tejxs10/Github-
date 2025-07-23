#include <stdio.h>

int sumOfEve(int n, int sum){
    if(n==0)
        return sum;

    else if(n%2 == 1)
    {   
        n=n-1;
        sumOfEve(n,sum);
    }
    else
    {
    sum += n;
    sumOfEve(n-2,sum);
    }
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    sum = sumOfEve(n,sum);
    printf("%d",sum);
    return 0;
}