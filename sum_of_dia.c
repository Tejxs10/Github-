#include <stdio.h>

int main(){
    int n,i,j,sum=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++){
        if(i == n-i-1)
            j = a[i][n-i-1];
        else
            sum = sum + a[i][i] + a[i][n-i-1];
    }
    printf("%d",sum+j);
    return 0;
}