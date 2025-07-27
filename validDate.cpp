#include <iostream>
using namespace std;

int validDate(char *s){
    if(s[2] != s[5]){
        return 0;
    }
    int d,m,y;
    d = (s[0]-'0')*10 + (s[1]-'0');
    m = (s[3]-'0')*10 + (s[4]-'0');
    y = (s[6]-'0')*1000 + (s[7]-'0')*100 + (s[8]-'0')*10 + (s[9]-'0');
    if(!(d>=1 && d<=31)){
        return 0;
    }
    if(!(m>=1 && m<=12)){
        return 0;
    }else{
        if(m==2){
            if(!(d>=1 && d<=29)){return 0;}
        }else if(m==4 || m==6 || m==9 || m==11){
            if(!(d>=1 && d<=30)){return 0;}
        }
    }
    if(!(y>=1900 && y<=2999)){
        return 0;
    }
    return 1;
}

int main(){
    char *s = (char *)malloc(10*sizeof(char));
    for(int i=0;i<10;i++){
        cin>>s[i];
    }
    int res = validDate(s);
    if(res){
        cout<<"Valid";
    }else{
        cout<<"Invalid";
    }
    return 0;
}