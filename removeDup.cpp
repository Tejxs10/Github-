#include <iostream>
using namespace std;
int n;
int* remDup(int *p){
    int flag=1,count=0;
    int *q = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        flag=1;
        for(int j=0;j<n;j++){
            if(p[i] == q[j]){
                flag = 0;
            }
        }
        if(flag){
            q[count++] = p[i];
        }
    }
    n=count;
    return q;
}

int main(){
    cin>>n;
    int *p = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    p = remDup(p);
    p = (int *)realloc(p,n*sizeof(int));
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    return 0;
}
