#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5],i;
    printf("Enter Static Array Elements: \n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    
    int n1;
    printf("\nEnter the number of elements for the dynamic array: ");
    scanf("%d",&n1);
    int *b = (int*)malloc(n1*sizeof(int));
    if(b == NULL){
        printf("Memory Allocation failed.\n");
        return 0;
    }
    printf("Enter %d elements for the dynamic array:\n",n1);
    for(i=0;i<n1;i++)
        scanf("%d",&b[i]);
    printf("Elements of Dynamic Array are: ");
    for(i=0;i<n1;i++)
        printf("%d ",b[i]);
    int n2;
    printf("\nEnter new size for the dynamic array: ");
    scanf("%d",&n2);
    b = (int*)realloc(b,n2*sizeof(int));
    if(n2>n1){
        printf("Enter %d more elements to fill the resized dynamic array:\n",n2-n1);
        for(i=n1;i<n2;i++)
            scanf("%d",&b[i]);
    }
    printf("The resized Dynamic array elements:\n");
    for(i=0;i<n2;i++)
        printf("%d ",b[i]);
    printf("\n");
    free(b);
    return 0;
}