#include<stdio.h>
int main(){
    int col,row;
    for ( row = 5; row >= 1; row--)
    {
        for ( col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    for ( row = 2; row <= 5; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    
}