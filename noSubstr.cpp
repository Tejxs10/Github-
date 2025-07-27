#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int i,j,n = s.size();
    cout<<n<<endl;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i;j++){
            cout<<s.substr(i,j)<<" ";
        }
        cout<<endl;
    }
}