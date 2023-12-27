#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter first value : ");
    scanf("%d", &a);
    printf("Enter Second value : ");
    scanf("%d", &b);
    printf("Enter Third value : ");
    scanf("%d", &c);
    printf("Enter Fourth value : ");
    scanf("%d", &d);

    printf("sum of four value : %d \n", a + b + c + d);

    int e = a + b + c + d;
    const int m = 5;
    const int dev = 2;
    printf("Multiplication is : %d \n", e * m);

    int final = e * m;
    printf("divison is : %d", final / dev);
}