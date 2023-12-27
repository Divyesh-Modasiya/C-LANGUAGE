#include<stdio.h>
void calculateCube(int a1){
    printf("cube is :%d",a1*a1*a1);
}
void main(){
    int a;
    printf("Enter value :");
    scanf("%d",&a);
   
    calculateCube(a);
}