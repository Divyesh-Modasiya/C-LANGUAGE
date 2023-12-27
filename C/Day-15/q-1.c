
#include<stdio.h>
int main(){
    int i,j,c;
    for ( i = 1; i <= 5; i++)
    {
        for ( c = 4; c >= i; c--)
        {
            printf("  ");
        }
        

        for ( j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}