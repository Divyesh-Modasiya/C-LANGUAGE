#include<stdio.h>
int main(){
    int maxsize=100;
    int i;
    int arr1[maxsize],arr2[maxsize],arr3[maxsize*2];
    int size1,size2,size3 = 0;

    printf("Enter size of first array :");
    scanf("%d",&size1);
    
    for (int i = 0; i < size1; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
        size3++;
    }
   
    printf("Enter size of second array :");
    scanf("%d",&size2);

    for (int i = 0; i < size2; i++)
    {
        printf("Enter the value :");
        scanf("%d",&arr2[i]);
        arr3[size3]=arr2[i];
        size3++;
    }
   
    for ( i = 0; i < size3; i++)
    {
        printf("%d\n",arr3[i]);
    }
    
    
    
}