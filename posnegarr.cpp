#include <iostream>
using namespace std;

void printarray(int a[], int n){
    int b[n],c=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            b[c++] = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            b[c++] = a[i];
        }
    }
     for(int i=0;i<n;i++){
         cout<<b[i]<<" ";
     }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    printarray(a,n);
    return 0;
}