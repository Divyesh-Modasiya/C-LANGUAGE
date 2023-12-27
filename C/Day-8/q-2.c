#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b :");
    scanf("%d", &b);
    printf("Enter value of c :");
    scanf("%d", &c);
    printf("Enter value of d :");
    scanf("%d", &d);

    (a > b) ? (a > c)   ? (a > d) ? printf("A is Max : %d", a) : printf("D is Max : %d", d)
                : (c > d) ? printf("C is Max : %d", c)
                        : printf("D is Max : %d", d)

    : (b > c) ? (b > d) ? printf("B is Max %d", b) : printf("D is Max %d", d)
    : (c > d) ? printf("C is Max : %d", c)
              : printf("D is Max : %d", d);
}
