// 5. Write a program in [programming language of choice] that accepts user input to populate a 1D array and then finds all the even numbers within the array, computing their product.

#include<stdio.h>
int main(){
    int arr[5];
    int p=1;

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
      if (arr[i] % 2 ==0)
      {
        printf("Even no :%d\n",arr[i]);
        p *= arr[i];
      }
    }
    printf("Product is :%d",p);
    
}