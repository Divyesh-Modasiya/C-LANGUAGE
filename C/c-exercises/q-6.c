// 6.Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches
// Area of the Circle = 113.040001 square inches


#include <stdio.h>
int main(){
    float pi = 3.14;
    int r;

    printf("Enter r value : ");
    scanf("%d",&r);
    float p = 2*pi*r;
    printf("Perimeter iof circle is : %.2f\n",p);

    float a = pi*r*r;
    printf("area of circle is : %.2f",a);
}