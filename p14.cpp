#include <iostream>
using namespace std;

float areaOfCircle(float a) {
    return 3.142*a*a;
}

int main(){
    float a,res;
    cin>>a;
    res = areaOfCircle(a);
    cout<<"The area of square: "<<res;
    return 0;
}