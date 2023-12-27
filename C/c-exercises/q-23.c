// 23. Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
// Test Data :
// Input the first number: 25
// Input the second number: 15
// Input the third number: 35
// Expected Output:
// Perimeter = 75.0

#include<stdio.h>
int main(){
    float a,b,c,d; 
    printf("Enter value :");
    scanf("%f",&a); 
    printf("Enter value :");
    scanf("%f",&b); 
    printf("Enter value :");
    scanf("%f",&c); 
    
    if (a+b>c && a+c>b && b+c>a)
    {   d = a+b+c;
        printf("Perameater is :%.2f",d);
    }else{
        printf("Triangel is not possible");
    }
    
}