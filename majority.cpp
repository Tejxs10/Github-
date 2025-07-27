#include <iostream>
using namespace std;
int count=0;
int* majority(int *p, int n){
    int c,num,mc=0,mnum=0;
    int *q = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        c=0;
        num = p[i];
        for(int j=0;j<n;j++){
            if(p[i] == p[j]){
                c++;
            }
        }
        if(c>mc){
            mc = c;
            mnum = num;
        }
    }
    for(int i=0;i<n;i++){
        c=0;
        num = p[i];
        for(int j=i+1;j<n;j++){
            if(p[i] == p[j]){
                c++;
            }
        }
        if(c==mc){
            q[count++] = num;
        }
    }
    q = (int *)realloc(q,count*sizeof(int));
    return q;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int* res = majority(a,n);
    for(int i=0;i<count;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}