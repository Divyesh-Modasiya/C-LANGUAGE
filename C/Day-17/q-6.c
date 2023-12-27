// 6. Develop a program in [programming language of choice] that takes input from the user for two separate 1D arrays, adds corresponding elements together, and stores the result in a new array.

#include<stdio.h>
int main(){
    int arr1[5];
    int arr2[5];
    int arr3[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter arr1 value :");
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter arr2 value :");
        scanf("%d",&arr2[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        arr3[5] = arr1[i]+arr2[i];
        printf("%d\n",arr3[5]);
    }
    
    
}