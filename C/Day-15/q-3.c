

#include<stdio.h>
int main(){
    int row,col,c;

    for ( row = 5; row >= 1; row--)
    {

      for ( c = 1; c < row; c++)
      {
        printf("  ",c);
      }
          

     for ( col = row; col <= 5; col++)
     {
        printf("%d ",row);

     }
        printf("\n");
    }
    
    
}