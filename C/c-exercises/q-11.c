// 11. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444

#include<stdio.h>
int main(){
    float w,n,w2,n2,c;

    printf("Weight of item-1 :");
    scanf("%f",&w);
    printf("Number  of item-1 :");
    scanf("%f",&n);
    printf("Weight of item-2 :");
    scanf("%f",&w2);
    printf("Number  of item-2 :");
    scanf("%f",&n2);

    c = ((w*n)+(w2*n2))/(n + n2);
    
    printf("Avrage is :%.2f",c);

}