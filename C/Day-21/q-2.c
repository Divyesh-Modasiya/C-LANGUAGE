#include <stdio.h>
int main()
{
    char n[] = "HELLO WORLD";

    for ( int i = 0; n[i] != '\0'; i++)
    {
        if (n[i]>='A' && n[i]<='Z')
        {
            n[i] += 32;
        }
        printf("%c",n[i]);
    }
    
}