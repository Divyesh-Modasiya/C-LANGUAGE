#include <stdio.h>
int main()
{
    char n[] = "hello world";

    for ( int i = 0; n[i] != '\0'; i++)
    {
        if (n[i]>='a' && n[i]<='z')
        {
            n[i] -= 32;
        }
        printf("%c",n[i]);
    }
    
}