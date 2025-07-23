#include <stdio.h>

struct student{
    int m1,m2,m3;
    char name[25];
    float avg;
}s;

int main(){
    printf("Name: ");
    scanf("%s",&s.name);
    printf("Marks: ");
    scanf("%d",&s.m1);
    scanf("%d",&s.m2);
    scanf("%d",&s.m3);
    s.avg = (s.m1+s.m2+s.m3)/3;
    printf("Name: %s\n",s.name);
    printf("Marks 1: %d\n",s.m1);
    printf("Marks 2: %d\n",s.m2);
    printf("Marks 3: %d\n",s.m3);
    printf("Total: %d\n",s.m1+s.m2+s.m3);
    printf("Average: %f\n",s.avg);
    return 0;       
}