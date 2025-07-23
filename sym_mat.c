#include <stdio.h>

int main(){
    int r,c,i,j,flag=1;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
            if(a[i][j] != a[j][i])
                flag = 0;   
    if(flag)
        printf("Symmetric");
    else
        printf("Asymmetric");
    return 0;
}