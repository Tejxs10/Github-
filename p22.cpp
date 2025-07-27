#include <iostream>
using namespace std;

bool iseven(int n){
    if(n%2 == 0){
        return true;
    }
    else return false;
}
int main(){
    int n;
    cin>>n;
    bool res = iseven(n);
    cout<<((res)?"Even":"Odd");
}