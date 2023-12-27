#include<stdio.h>
int main(){
   const int a = 5;
   const int b = 2;
   int c;
    printf("Enter First value : ");
    scanf("%d",&c);
    printf("increment  is : %d\n",c+=a);
    printf("Decrement  is : %d",c-=b);
}