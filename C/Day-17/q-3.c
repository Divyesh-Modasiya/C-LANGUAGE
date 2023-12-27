// 3. Implement a program in [programming language of choice] that allows the user to input values into a 1D array and calculates the average of these elements.

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
        sum += arr[i];
    }
    printf("Avrage is :%d",sum/5);
    
    
}