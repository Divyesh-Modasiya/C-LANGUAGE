// 5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches


#include <stdio.h>
int w = 7;
int h = 5;
int main(){
    int r = 2*(h+w);
    printf("peramiter of rectangle is : %d\n",r);
    int a = w*h;
    printf("area of rectangle is : %d",a);
}