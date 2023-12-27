#include <stdio.h>
int main(){

    int a = 20;
    int b = 30;
    int c;

    printf("hello world \n");

    printf("Name : Divyesh Modasiya\nGRID : 6590\nCource : full stack\n");

    printf("addition of two value is %d \n", a+b);

    printf("input value for intrest : ");
    scanf("%d",&c);

    printf("intrest rate is %d\n",c*5/100);

    int A,B,C;
    A=10;
    B=20;
   
   C=A;
   A=B;
   B=C;
   printf("%d\n",A);
   printf("%d\n",B);

    A=A*A*A;
    printf("square is %d",A);
    return 0;

}