#include <stdio.h>
#include <ctype.h>

int noOfCons(int n, char *str){
    int count=0;
    for(int i=0;i<n;i++)
        if(isalpha(str[i])){
            str[i] = tolower(str[i]);
            if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'))
                count++;
        }
    return count;
}

int main(){
    int n,res;
    scanf("%d", &n);
    char str[n];
    for(int i=0; i<n; i++)
        scanf(" %c", &str[i]);
    res = noOfCons(n, str);
    printf("%d\n", res);
    return 0;
}