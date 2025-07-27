#include <iostream>
using namespace std;

char Grade(int grade){
    if(grade>=90){
        return 'A';
    }else if(grade>=80){
        return 'B';
    }else if(grade>=70){
        return 'C';
    }else return 'D';
}

int main(){
    int grade;
    cin>>grade;
    char res = Grade(grade);
    return 0;
}