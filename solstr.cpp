#include <iostream>
using namespace std;

float solve(char *s,int n){
    float res=s[0]-'0';
    int a;
    char ch;
    for(int i=0;i<n;i++){
        if(!isdigit(s[i])){
            ch = s[i];
            a = s[++i]-'0';
            while(isdigit(s[i+1])){
                i++;
                a = a * 10 + (s[i] - '0');
            }
            switch(ch){
                case '+':
                    res = res + a;
                    break;
                case '-':
                    res = res - a;
                    break;
                case '*':
                    res = res * a;
                    break;
                case '/':if(a<=0){
                            cout << "Error: Division by zero is not allowed." << endl;
                            return 0;
                        }else{
                            res=(float)res/a;
                        }
                    break;
                case '%':if(a<=0){
                            cout << "Error: Modulus by zero is not allowed." << endl;
                            return 0;
                        }else{
                            res=(int)res%a;
                        }
                        break;
                default:
                    cout << "Error: Invalid operator '" << ch << "'." << endl;
                    return 0;
            }
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    char *str = (char *)malloc(n * sizeof(char));
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    float result = solve(str, n);
    if(result != 0){
        cout << "Result: " << result << endl;
    }
    return 0;
}