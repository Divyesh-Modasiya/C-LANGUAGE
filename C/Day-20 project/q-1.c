#include<stdio.h>
int main(){
    int maxsize = 100;
    int arr[maxsize];
    int s1;

    printf("Enter size :");
    scanf("%d",&s1);

    for (int i = 0; i < s1; i++)
    {
        printf("Value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < s1; i++)
    {
        if (arr[i]<0)
        {
            printf("Negative no is :%d\n",arr[i]);
        }
        
    }
    
}