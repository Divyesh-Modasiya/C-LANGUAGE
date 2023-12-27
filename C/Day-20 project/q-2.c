#include<stdio.h>
int main(){
    int maxsize = 100;
    int arr[maxsize][maxsize];
    int row,col,store=0;

    printf("Enter row size :");
    scanf("%d",&row);
    printf("Enter col size :");
    scanf("%d",&col);


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Value :");
            scanf("%d",&arr[row][col]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           if (store < arr[row][col])
           {
            store = arr[row][col];
           }
           
        }
        
    }
    printf("Max value is :%d",store);
}