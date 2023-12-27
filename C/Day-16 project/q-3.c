#include<stdio.h>
int main(){
    int row,col,c;
    for ( row = 5; row >= 1; row--)
    {
         for (c = 4; c>=row; c--){
            printf("  ");
        }
        for ( col = 1; col <= row; col++)
        {
            printf("%d ",col%2);
        }
        printf("\n");
    }
    
}