// 20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
// Test Data :
// Input the first number(a): 25
// Input the second number(b): 35
// Input the third number(c): 12
// Expected Output:
// Root1 = -0.60000
// Root2 = -0.80000

#include<stdio.h>
int main(){
    float a,b,c,x1,x2,delta;

    printf("Enter value of (a) :");
    scanf("%f",&a);
    printf("Enter value of (b) :");
    scanf("%f",&b);
    printf("Enter value of (c) :");
    scanf("%f",&c);

    delta = ((b*b)-(4*a*c));
    x1 = (-b + sqrt(delta))/(2*a);
    printf("Root1 is :%.4f\n",x1);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("Root2 is :%.4f",x2);
    }