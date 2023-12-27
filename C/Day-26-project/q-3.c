// **Question 3:**Write a C program to find the factorial of a given positive integer using a user-defined function. The program should prompt the user to enter a positive integer and then calculate its factorial using a function called calculateFactorial(). Display the calculated factorial in the main function.

#include<stdio.h>
calculateFactorial(int a){
    int m=1;
     for (int i = a; i >= 1; i--)
    {
        m*=i;
    }
    return m;
}
int main(){
    int a;
    int m=1;

    printf("Enter value :");
    scanf("%d",&a);

   
    printf("%d",calculateFactorial(a));

}