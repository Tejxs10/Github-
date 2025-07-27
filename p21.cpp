#include <iostream>
#include <cmath>
using namespace std;

float result(int x, int y){
    float z;
    z = (log10(exp(x)) + log(sqrt(y)))/(sin(x) + exp(x)+ pow(x,y));
    return z;
}

int main(){
    int a,b;
    cin>>a>>b;
    float res = result(a,b);
    return 0;
}