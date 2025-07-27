#include <iostream>
#include <cstring>
using namespace std;

char* con(char *s, int n){
    int i,j;
    for(i=0;i<n-1;i++){
        if(isspace(s[i])){
            j=i;
            while(s[j] != '\0'){
                s[j] = s[j+1];
                j++;
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