#include<stdio.h>
int main(){
    int row,col;
    for ( row = 0; row <= 6; row++) 
    {
        int new=70-row;
        for ( col = 6; col > row; col--)
        {
            printf(" %c ",new);
            new--;
        }
        printf("\n");
    }
    
}  