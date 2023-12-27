// **Question 2:**Write a C program to calculate the area of a rectangle using a user-defined function. Implement a function called calculateArea() that takes the length and width of the rectangle as inputs and returns the calculated area. Display the area in the main function.

#include<stdio.h>
calculateArea(int l , int w){
    int a = l* w;
    return a;
}
int main(){
    int l,w;

    printf("Enter leangth :");
    scanf("%d",&l);
    printf("Enter width :");
    scanf("%d",&w);

   printf("%d",calculateArea(l,w)); 
}


// #include<stdio.h>
// void calculateArea(int l,int w){
//     int area;
//    area = l*w;
//    printf("Area is :%d",area);
// }
// void main(){
//     int l,w;

//     printf("Enter leangth :");
//     scanf("%d",&l);
//     printf("Enter width :");
//     scanf("%d",&w);

    
//     calculateArea(l,w);
// }
