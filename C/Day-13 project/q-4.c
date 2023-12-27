#include <stdio.h>
int main()
{
    int zero = 0;
    int one = 1;
    int store = 0;
    int user, i;

    printf("Enter value :");
    scanf("%d", &user);

    printf("%d\n %d\n", zero, one);

    for (i = 0; i < user; i++)
    {
        // if (i < 2)
        // {
        //     printf("%d\n %d\n", zero, one);
        // }
        if(i >= 2)
        {
            store = zero + one;

            printf("\n %d", store);

            zero = one;
            one = store;

            
        }
    }
}