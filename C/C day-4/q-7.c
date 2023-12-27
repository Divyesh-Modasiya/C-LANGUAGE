#include<stdio.h>
int main(){
    int a,b;
    const int c=3;
    printf("Enter the First Value :");
    scanf("%d",&a);
    printf("Enter the Second Value :");
    scanf("%d",&b);
    
    printf("Answer is : %d ",(a+b)*c);
}