#include <stdio.h>
#include <ctype.h>

int main(){
    char s[50];
    int i,l=0,flag=1;
    scanf("%[^\n]s",s);
    for(i=0;s[i] !='\0';i++)
        l++;
    for(i=0;s[i] !='\0';i++){
        if(isdigit(s[0])){
            flag=0;
            break;
        }
        if(isalnum(s[i]) || s[i] == '_')
            continue;
        else{
            flag=0;
            break;
        }
    }
    if(flag==1 && l>=5)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}