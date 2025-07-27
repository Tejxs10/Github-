#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m,i;
    scanf("%d",&n);
    int *p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d ",&p[i]);
    scanf("%d",&m);
    p=(int*)realloc(p,m*sizeof(int));
    for(i=n;i<m;i++)
        scanf("%d",&p[i]);
    for(i=0;i<m;i++)
        printf("%d ",p[i]);
    return 0;
}