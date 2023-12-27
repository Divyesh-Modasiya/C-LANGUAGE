#include<stdio.h>
int main(){
    int row,col;

    for ( row = 41; row <= 45; row++)
    {
        for ( col = 41; col <= row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}