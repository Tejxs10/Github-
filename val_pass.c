#include <stdio.h>
#include <ctype.h>

int main(){
    char s[50],j=0,i,l=0,u=0,d=0,b=0,sp=0;;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
        j++;
    for(i=0;s[i]!='\0';i++){
        if(islower(s[i]))
            l++;
        else if(isupper(s[i]))
            u++;
        else if(isdigit(s[i]))
            d++;
        else if(isspace(s[i]))
            b++;
        else    
            sp++;
    }
    if(j>8 && l!=0 && u!=0 && d!=0 && sp!=0 && b==0)
        printf("Valid Password");
    else    
        printf("Not Valid Password");
    return 0;
}