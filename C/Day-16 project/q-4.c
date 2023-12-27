#include<stdio.h>
int main(){
    int row,col,c;
    for ( row = 1; row <= 5; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        for(c=4;c>=row;c--){
            printf("  ");
        }
        for ( col = row; col >= 1; col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    
}