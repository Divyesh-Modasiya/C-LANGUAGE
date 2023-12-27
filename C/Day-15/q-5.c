
#include<stdio.h>
int main(){
    int i,j,c;
    for ( i = 5; i >= 1; i--)
    {
        for ( c = 4; c >= i; c--)
        {
            printf(" ");
        }
        
        for ( j = 5; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    
}