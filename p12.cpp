#include <iostream>
using namespace std;

float areaOfSquare(float side) {
    return side * side;
}

int main(){
    float a,res;
    cin>>a;
    res = areaOfSquare(a);
    cout<<"The area of square: "<<res;
    return 0;
}