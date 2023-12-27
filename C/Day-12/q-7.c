#include<stdio.h>
int main(){
    int a;
    for ( a = 1; a <=30; a++)
    {
        if (a%3==0 && a%5==0)
        {
            printf("Fizz Buzz\n");
        }
        
        if (a%3==0)
        {
            printf("Fizz\n");
            continue;
        }
        if (a%5==0)
        {
            printf("Buzz\n");
            continue;
        }
        printf("%d\n",a);
    }
    
}