#include<stdio.h>
int main(){
    int col,row;

    for ( row = 5; row >= 1; row--)
    {
        for ( col = 5; col >=1  ; col--)
        {
           printf(" %d ",row);
        }
        printf("\n");
    }
    
}