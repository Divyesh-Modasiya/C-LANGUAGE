#include<stdio.h>
int main(){
    int row,col,c;

    for ( row = 5; row >= 1; row--)
    {
        for (c = 2; c<=row; c++){
            printf("  ");
        }
        for ( col = row; col <= 5; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    
}