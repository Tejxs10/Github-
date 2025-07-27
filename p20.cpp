#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    float d;
    cin>>a>>b>>c;
    if((b*b)-(4*a*c)<0){
        cout<<"No real roots";
    }else if(((b*b)-(4*a*c))==0){
        cout<<"One real root: "<<-b/(2*a);
    }else{
        d = sqrt(b*b - 4*a*c);
        cout<<"The roots are: "<<(-b+d)/(2*a)<<" and "<<(-b-d)/(2*a);
    }
    return 0;
}