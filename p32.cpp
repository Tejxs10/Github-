#include <iostream>
using namespace std;

bool iseven(int n){
    bool res = n&1;
    return res;
}

int main(){
    int n;bool res;
    cin>>n;
    res = iseven(n);
    (!res && cout<<"Even");
    (res && cout<<"Odd");
    return 0;
}