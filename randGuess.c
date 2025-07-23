#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x,n,count=0,lives=5;
    srand(time(0));
    x = ((rand()%100)<90)? (rand()%100)+10 : rand()%100 ;
    printf("Enter your number: \n");
    while(lives>0){
        scanf("%d",&n);count++;
        if(n == x){
            printf("Correct Guess.\n");
            printf("Attempts: %d",count);
            break;
        }else{
            if(n<x)
                printf("Your guess is lesser than the number.\n");
            else
                printf("Your guess is higher than the number.\n");
        }
        lives--;
    }
    if(lives==0){
        printf("Out of lives GAME OVER.\n");
        printf("Your Number was: %d",x);
    }
    return 0;
}