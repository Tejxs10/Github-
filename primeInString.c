#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(){
    char a[50];
    int i,j,d,s,count,sum=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++){
        if(isdigit(a[i])){
            s=0;
            while(isdigit(a[i])){
                d = a[i] - '0';
                s = (s*10) + d;
                i++;
            }
            count =0;
            for(j=2;j<=sqrt(s);j++){
                if(s%j == 0)
                    count++;
            }
            if(count==0)
                printf("%d ",s);
        }
    }
    return 0;
}