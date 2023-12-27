#include<stdio.h>
int main(){
    int a,b;
    int d = 180;
    printf("First angle :");
    scanf("%d",&a);
    printf("Second angle :");
    scanf("%d",&b);
    int c = a+b;
    // int d = 180;

    printf("Third angle is :%d ",d-c);
}