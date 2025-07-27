#include <iostream>
using namespace std;

float areaOfTrianlge(float a, float b) {
    return 0.5 * a * b;
}

int main(){
    float a,b,res;
    cin>>a>>b;
    res = areaOfTrianlge(a,b);
    cout<<"The area of square: "<<res;
    return 0;
}