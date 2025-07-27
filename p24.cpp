#include <iostream>
using namespace std;

void withdrawal(int pin, float amount){
    float balance = 10000;
    int PIN=1234;
    if(PIN == pin){
        balance -= amount;
        cout<<"Withdrawal Successfull";
    }else{
        cout<<"Invalid PIN";
    }
}

int main(){
    int pin, amount;
    cin>>pin>>amount;
    withdrawal(pin,amount);
    return 0;
}