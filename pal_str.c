#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    scanf("%[^\n]", s);
    int i,l=0,flag=0;
    for(i=0;s[i]!='\0';i++){
        l++;
    }
    for(i=0;i<l/2;i++){
        if(s[i] != s[l-i-1]){
            flag = 1;
            break;
        }
    }
    if(!flag)
        printf("Palindrome");
    else 
        printf("Not Palindrome");
    return 0;
}