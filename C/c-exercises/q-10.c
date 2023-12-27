// 10. Write a C program that accepts two integers from the user and calculates the product of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 15
// Expected Output:
// Product of the above two integers = 375


#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first value :");
    scanf("%d",&a);
    printf("Enter second value :");
    scanf("%d",&b);

    printf("Sum is :%d",a*b);
}