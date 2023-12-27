#include<stdio.h>
void multiplyNumbers(int a1, int a2){
    printf("Multiplication is :%d",a1*a2);
}
void main(){
    int a,b;
    printf("Enter value :");
    scanf("%d",&a);
    printf("Enter value :");
    scanf("%d",&b);

    multiplyNumbers(a,b);
}