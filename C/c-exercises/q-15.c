// 15. Write a C program to calculate the distance between two points.
// Test Data :
// Input x1: 25
// Input y1: 15
// Input x2: 35
// Input y2: 10
// Expected Output:
// Distance between the said points: 11.1803

#include<stdio.h>
int main(){
    int x1,x2,y1,y2;
    printf("Enter x1 value :");
    scanf("%d",&x1);
    printf("Enter x2 value :");
    scanf("%d",&x2);
    printf("Enter y1 value :");
    scanf("%d",&y1);
    printf("Enter y2 value :");
    scanf("%d",&y2);

    float a = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    printf("Distance between the said points : .4%f",sqrt(a));
}