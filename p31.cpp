#include <iostream>
using namespace std;

void printNum(int s, int e){
    while(s<=e){
        cout<<s<<" ";
        s++;
    }
}

int main(){
    int s,e;
    cin>>s>>e;
    printNum(s,e);
    return 0;
}