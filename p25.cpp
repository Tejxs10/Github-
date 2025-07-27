#include <iostream>
using namespace std;

bool isvowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char c;bool res;
    cin>>c;
    res = isvowel(c);
    (res)?cout<<"Vowel":cout<<"Not Vowel";
    return 0;
}