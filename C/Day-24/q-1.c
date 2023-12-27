#include<stdio.h>
void addNumbers(int a1,int b1){
    printf(" Sum is :%d",a1+b1);
}
void main(){
    int a,b;
    printf("Enter value :");
    scanf("%d",&a);
    printf("Enter value :");
    scanf("%d",&b);
    addNumbers(a,b);
}