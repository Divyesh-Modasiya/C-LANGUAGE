#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of A :");
    scanf("%d",&a);
    printf("Enter value of B :");
    scanf("%d",&b);
    printf("Enter value of C :");
    scanf("%d",&c);

    if (a>b)
    {
        if (a>c)
        {
            printf("A is max %d",a);
        }
        else{
            printf("C is max %d",a);
        }
        
    }
    else{
        if (b>c)
        {
        printf("B is max %d",b);
        }
        else{
            printf("C is max %d",c);
        }
        
    }
    
}