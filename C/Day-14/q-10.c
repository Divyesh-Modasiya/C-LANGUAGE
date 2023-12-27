#include<stdio.h>
int main(){
    int row,col;
    for ( row = 65; row < 70; row++)
    {
        for ( col = 65; col <= row; col++)
        {
            printf(" %c ",col);
        }
        printf("\n");
    }
    
}