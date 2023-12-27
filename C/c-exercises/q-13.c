
// 13. Write a C program that accepts three integers and finds the maximum of three.
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
// Expected Output:
// Maximum value of three integers: 35



#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first value :");
    scanf("%d",&a);
    printf("Enter second value :");
    scanf("%d",&b);
    printf("Enter third value :");
    scanf("%d",&c);

    if (a>b)
    {
        if (a>c)
        {
            printf("%d",a);
        }else{
            printf("%d",c);
        }
        
    }else{
        if (b>c)
        {
            printf("%d",b);
        }else{
            printf("%d",c);
        }
        
    }
    
}