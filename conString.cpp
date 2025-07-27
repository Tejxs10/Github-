#include <iostream>
#include <cstring>
using namespace std;

char* con(char *s, int n){
    s[0] = toupper(s[0]);
    for(int i=0;i<n-1;i++){
        if(isspace(s[i])){
            while(!isalpha(s[i+1]) && i < n-1){
                i++;
            }
            if(isalpha(s[i+1])){
                s[i+1] = toupper(s[i+1]);
            }
        }
    }
    return s;
}

int main(){
    char *str = (char *)malloc(30*sizeof(char));
    fgets(str, 30, stdin);
    str = con(str,strlen(str));
    cout<<str;
    return 0;
}