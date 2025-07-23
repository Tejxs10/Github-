#include <stdio.h>

int main(){
    int r1,c1,r2,c2,i,j,k,temp;
    scanf("%d%d",&r1,&c1);
    scanf("%d%d",&r2,&c2);
    if(c2 == r2){
        int a[r1][c1],b[r2][c2];
        printf("Enter elements of first matrix: ");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);

        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&b[i][j]);

        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                temp=0;
                for(k=0;k<c1;k++)
                    temp += (a[i][k]*b[k][j]);
                printf("%d\t",temp);
            }
            printf("\n");
        }
                
    }else{
        printf("Matrix Multiplication not possible");
    }
    return 0;
}