#include <iostream>
using namespace std;

float areaOfRectangle(float a, float b) {
    return a*b;
}

int main(){
    float a,b,res;
    cin>>a>>b;
    res = areaOfRectangle(a,b);
    cout<<"The area of square: "<<res;
    return 0;
}