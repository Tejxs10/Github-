#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,i,j,k,flag=0,count=0;
    printf("Enter the elements of a&b: ");
    scanf("%d%d",&x,&y);

    int *a = (int*)malloc(x*sizeof(int));
    int *b = (int*)malloc(y*sizeof(int));

    printf("Enter elements of a: ");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);

    printf("Enter elements of b: ");
    for(i=0;i<y;i++)
        scanf("%d",&b[i]);

    int *c = (int*)malloc((x+y)*sizeof(int));

    for(i=0;i<x;i++)
        c[i] = a[i];

    for(j=0;j<y;j++){
        flag=0;
        for(k=0;k<x;k++){
            if(c[k]==b[j]){
                flag=1;
                count++;
                break;
            }
        }
        if(flag==0){
            c[i++] = b[j];
        }
    }

    c = (int*)realloc(c,(x+y-count)*sizeof(int));

    for(i=0;i<x+y-count;i++){
        printf("%d ",c[i]);
    }
    return 0;
}