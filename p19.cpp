#include <iostream>
using namespace std;

void randNum(){
    int num;
    srand(time(0));
    while(1){
        num = rand();
        if(num>=1000 && num<=9999){
            break;
        }
    }
    cout<<num;
}
int main(){
    randNum();
    return 0;
}