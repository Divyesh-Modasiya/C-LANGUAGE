#include<stdio.h>
int main(){
    int col,row,c;
    for ( row = 5; row >= 1; row--)
    {
    
        for ( col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
          for ( c = 4; c >= row; c--)
        {
            printf("  ");
        }
        for ( col = row; col >= 1; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    for ( row = 1; row <= 5; row++)
    {
    
        for ( col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
          for ( c = 4; c >= row; c--)
        {
            printf("  ");
        }
        for ( col = row; col >= 1; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}