// 22. Write a C program that reads 5 numbers and sums all odd values between them.
// Test Data :
// Input the first number: 11
// Input the second number: 17
// Input the third number: 13
// Input the fourth number: 12
// Input the fifth number: 5
// Expected Output:
// Sum of all odd values: 46

#include<stdio.h>
int main(){
    int arr[5];
    int sum=0;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i]%2!=0)
        {
            printf("Odd number :%d\n",arr[i]);
             sum += arr[i];
        }
    }
    
     printf("Sum of odd no :%d\n",sum);
    
    
}