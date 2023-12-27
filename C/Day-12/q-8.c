#include<stdio.h>
int main(){
    int a;
    for ( a = 1; a <=30; a++)
    {
       
        if (a%8==0)
        {
            printf("Eight\n");
            continue;
        }
        if (a%2==0)
        {
            printf("Two\n");
            continue;
        }
        printf("%d\n",a);
    }
    
}