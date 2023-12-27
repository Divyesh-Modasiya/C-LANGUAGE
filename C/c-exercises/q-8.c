// 8. Write a C program to convert specified days into years, weeks and days.
// Note: Ignore leap year.

// Test Data :
// Number of days : 1329
// Expected Output :
// Years: 3
// Weeks: 33
// Days: 3

#include<stdio.h>
int main(){
    int a;
    printf("Enter the Number of days :");
    scanf("%d",&a);
    int b = a/365;
    printf("years is :%d\n",b);

    int c = (b*365);
    int d = (a-c);
    int e = d/7;
    printf("Week is :%d\n",e);
    int f = e*7;
    int g = d-f;
    printf("day is :%d",g);
}