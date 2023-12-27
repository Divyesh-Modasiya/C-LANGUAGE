#include<stdio.h>
int main(){

    int a,b,c,d;
    printf("enter value of A :");
    scanf("%d",&a);
    printf("enter value of B :");
    scanf("%d",&b);
    printf("enter value of C :");
    scanf("%d",&c);
    printf("enter value of D :");
    scanf("%d",&d);

    (a<b) ? (a<c) ? (a<d) ? printf("A is min :%d",a) : printf("D is min :%d",d) 
            : (c<d) ? printf("C is min :%d",c) : printf("D is min :%d",d)  

       : (b<c) ? (b<d) ? printf("B is min :%d",b) : printf ("D is min :%d",d) :
       (c<d) ? printf("C is min :%d",c) : printf("D is min :%d",d);
             
}