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

    if (a < b)

    {

        if (a < c)
        {
           if (a<d)
           {
            printf("A is min %d",a);
           }
           else{
            printf("D is min %d",d);
           }
           
        }
        else
        {

            if (c < d)
            {
                printf("c is min %d", c);
            }
            else
            {
                printf("D is min %d", d);
            }
        }
    }
    else
    {
        if (b < c)
        {
            if (b < d)
            {
                printf("B ia min %d", b);
            }
            else
            {
                printf("D is min %d", d);
            }
        }
        else
        {
            if (c < d)
            {
                printf("C is min %d", c);
            }
            else
            {
                printf("D is min %d", d);
            }
        }
    }
}
