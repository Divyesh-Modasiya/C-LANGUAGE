// 4. Create a program in [programming language of choice] that prompts the user to input values into a 1D array and identifies and displays all the odd numbers within the array.
#include<stdio.h>
int main(){
    int arr[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <=4; i++)
    {
        if (arr[i]%2!=0)
        {
            printf("Odd number is :%d\n",arr[i]);
        }
        
    }
    
}