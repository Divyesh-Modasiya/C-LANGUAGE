// **Question 1:**  Write a C program that calculates the sum of squares of all even numbers from 1 to a given positive integer `n`. Implement a user-defined function called `calculateSumOfSquares` that takes an integer `n` as input from user  and returns the sum of squares of all even numbers from 1 to `n`. Display the calculated sum in the `main` function use TSRS.

#include<stdio.h>
calculateSumOfSquares(int a){
    int sum =0;
    int m=0;
    for (int i = 1; i <= a; i++)
    {
        if (i%2==0)
        {
            sum = i*i;
            m+=sum;
        }
}
    return(m); 
}
int main(){
    int a;
    printf("Enter value :");
    scanf("%d",&a);

    printf("Sum is :%d\n", calculateSumOfSquares(a));
}