#include <iostream>
using namespace std;

int fact(int n){
    if(n<=1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int countTrailingZeros(int num){
    int d,count=0,fac;
    fac = fact(num);
    while(fac>0){
        d = fac%10;
        if(d==0){
            count++;
            fac = fac/10;
        }else{
            break;
        }
    }
    return count;
}

int main(){
    int count,num;
    cin>>num;
    count = countTrailingZeros(num);
    cout<<"No. of zeroes: "<<count;
    return 0;
}