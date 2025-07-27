// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int main() {
    int n,i,j,s=INT_MAX,l=INT_MIN,count,isPrime=1,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        count = 0;
        for(j=2;j<=sqrt(a[i]);j++){
            if(a[i]%j == 0)
                count++;
        }
        if(count==0){
            if(s>a[i])
                s=a[i];
            if(l<a[i])
                l=a[i];
        }
    }
    
    while(s<=l){
        count = 0;
        for(j=2;j<=sqrt(s);j++){
            if(s%j == 0)
                count++;
        }
        if(count ==0){
            for(i=0;i<n;i++)
                if(s==a[i])
                    flag = 1;
        }
        if(flag==0){
            isPrime = 0;
            break;}
    }
    if(isPrime == 1)
        printf("Prime array");
    else
        printf("Not a Prime array");
    return 0;
}
