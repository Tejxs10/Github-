#include <iostream>
using namespace std;

void swapNum(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping: a= "<<a<<" b= "<<b<<endl;
    swapNum(&a, &b);
    cout<<"After swapping: a= "<<a<<" b= "<<b<<endl;
    return 0;
}