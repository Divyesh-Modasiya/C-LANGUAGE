// 14. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
// Test Data :
// Input total distance in km: 350
// Input total fuel spent in liters: 5
// Expected Output:
// Average consumption (km/lt) 70.000


#include<stdio.h>
int main(){
    int a,b;
    printf("Input distance in km :");
    scanf("%d",&a);
    printf("Input fule in liters :");
    scanf("%d",&b);
    float c = a/b;
    printf("Average consumption (km/lt) : %.2f",c);
}