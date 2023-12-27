#include<stdio.h>
int main(){
    int arr[5];
    int store;

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter value :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (store > arr[i])
        {
            store = arr[i];
        }   
    }
    printf("%d\n",store);
    
}