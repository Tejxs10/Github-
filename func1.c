#include <stdio.h>

int addition(int a, int b){
    int c;
    c=a+b;
    return c;
}

int subtraction(int a, int b){
    int c;
    c=a-b;
    return c;
}

int multiplication(int a, int b){
    int c;
    c=a*b;
    return c;
}

float division(int a, int b){
    float c;
    c=(float)a/b;
    return c;
}

int main(){
    int x,y;
    float z;
    scanf("%d%d",&x,&y);
    z = addition(x,y);
    printf("%.0f\n",z);
    z = subtraction(x,y);
    printf("%.0f\n",z);
    z = multiplication(x,y);
    printf("%.0f\n",z);
    z = division(x,y);  
    printf("%f\n",z);
    return 0;
}