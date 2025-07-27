#include <stdio.h>
#include <math.h>

int main(){
    int n,i,temp=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        temp = floor(sqrt(a[i]));
        if(a[i] == temp*temp){
            printf("%d ",a[i]);
        }
    }
    return 0;
}