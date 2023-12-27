// 1. Write a program in [programming language of choice] that initializes a 1D array and takes user input to populate its elements.

#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0; i <=4; i++)
    {
        printf("Enter value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <=4; i++)
    {
    printf("%d\n",arr[i]);
    }
    
    
}