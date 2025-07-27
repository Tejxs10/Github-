#include <stdio.h>

int fibTerm(int n){
    if(n<=1){
        return n;
    }
    return fibTerm(n-1) + fibTerm(n-2);
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    
    int result = fibTerm(n);
    printf("Fibonacci term %d is %d\n", n, result);
    
    return 0;
}