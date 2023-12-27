#include<stdio.h>
int main(){
    int maxsize = 100;
    int arr[maxsize][maxsize];
    int s1,s2, sum=0;

    printf("Enter row size :");
    scanf("%d",&s1);
    printf("Enter col size :");
    scanf("%d",&s2);

    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            printf("value :");
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i <= s1; i++)
    {
  
        for (int j = 0; j <= s2; j++)
        {
            if (i+j==3)
            {
                sum += arr[i][j];
            }
        }
        printf("\n");
       
    }       
    printf("Sum is :%d",sum);
    
}