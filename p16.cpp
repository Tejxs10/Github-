#include <iostream>
using namespace std;

void swapNum(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping: a= "<<a<<" b= "<<b<<endl;
    swapNum(&a, &b);
    cout<<"After swapping: a= "<<a<<" b= "<<b<<endl;
    return 0;
}