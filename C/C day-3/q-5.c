#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the marks of first sub :");
    scanf("%d",&a);
    printf("Enter the marks of second sub :");
    scanf("%d",&b);
    printf("Enter the marks of third sub :");
    scanf("%d",&c);

    printf("Total is :  %d\n",a+b+c);

    int total = a+b+c;
    const int d = 3;
    printf("Avrage is :  %d", total/d);
}