// 18. Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
// Test Data :
// Input no. of days: 2535
// Expected Output:
// 6 Year(s)
// 11 Month(s)
// 15 Day(s)

#include<stdio.h>
int main(){
    float days,d,m,y;
    printf("Number of days :");
    scanf("%f",&days);

    y = days/365;
    printf("%d Year(s)\n",(int)y);

    m = ((float)y-(int)y) * 12;
    printf("%d Month(s)\n",(int)m);

    d = days-(((int)m * 30)+(365*(int)y)); 
    printf("%d Day(s)\n",(int)d);


}