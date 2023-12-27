#include <stdio.h>
int main()
{
    char n[] = "HelLo worLD";

    for ( int i = 0; n[i] != '\0'; i++)
    {
        if (n[i]>='A' && n[i]<='Z')
        {
            n[i] += 32;
        }else if (n[i]>='a' && n[i]<='z')
        {
            n[i] -=32;
        }
        printf("%c",n[i]);
       
    }
    
}