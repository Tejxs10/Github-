#include <iostream>
using namespace std;

int luckyNum(int n){
    int a=1,b=1,c;
    if(n==1 || n==2){
        c=1;
    }else{
        for(int i=1;i<=n-2;i++){
            c=a+b;
            a=b;
            b=c;
        }
    }
    return c;
}

int main(){
    int num;
    cin>>num;
    num = luckyNum(num);
    cout<<"The Lucky order is "<<num;
    return 0;
}