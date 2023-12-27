#include<stdio.h>
int main(){
    const float PI = 3.14;
    int a;

    printf("Enter the value of R :");
    scanf("%d",&a);
    
    int b = a*a;
    printf("Area of circle is : %.2f",PI*b);
}