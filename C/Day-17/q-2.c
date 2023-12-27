// 2. Develop a program in [programming language of choice] that creates a 1D array based on user input and computes the sum of all its elements.

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
    printf("su is :%d\n",sum);
   
}