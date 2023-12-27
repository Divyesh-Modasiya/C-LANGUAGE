#include<stdio.h>
int main(){
    int col,row;

    for ( row = 4; row >= 1; row--)
    {
        for ( col = 4; col >= row; col--)
        {
           printf(" %d ",row);
        }
        printf("\n");
    }
    
}