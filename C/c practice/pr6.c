#include <stdio.h>
int main()
{
    // int a;
    // int b;

    // printf("enter a value\t");
    // scanf("%d",&a);

    // printf("enter b value\t");
    // scanf("%d",&b);

    // (a>b) ? (printf("bigger value is %d",a)) : (printf("bigger value is %d",b));

    // return 0;

    int A, B, C;

    printf("enter A value\t");
    scanf("%d", &A);
    printf("enter B value\t");
    scanf("%d", &B);
    printf("enter C value\t");
    scanf("%d", &C);

    if (A<B && A<C)
    {
        printf("min val %d",A);
    }else if (B<C)
    {
        printf("min val %d",B);
    }
    else
    {
        printf("min val %d",C);
    }
    
    
}