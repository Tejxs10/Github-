#include <iostream>
#include <ctype.h>
using namespace std;

int countMiss(char *p, int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if((!isalnum(p[i])) && (!isspace(p[i]))){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    char *p = (char *)malloc(n*sizeof(char));
    cin>>p;
    int res = countMiss(p,n);
    cout<<"Miss: "<<res;
    return 0;
}