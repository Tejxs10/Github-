#include <iostream>
using namespace std;

bool Result(int m1, int m2, int m3){
    if(m1>=35 && m2>=35 && m3>=35){
        return true;
    }
    else return false;
}

int main(){
    int m1,m2,m3;
    bool res;
    cin>>m1>>m2>>m3;
    res = Result(m1,m2,m3);
    (res)?cout<<"Pass":cout<<"Fail";
    return 0;
}