#include<stdio.h>
int main(){
    int a;
    printf("Enter Unit :");
    scanf("%d",&a);

    if (a<=50)
    {
        a = a*1;
        printf("Amount is :%d",a);
    }else if (a<=150)
    {
        a = (a-50)*2 + 50;
        printf("Amount is :%d",a);
    }else if (a<=250)
    {
        a = (a-150)*3 + 150;
        printf("Amount is :%d",a);
    }
    else{
        a= (a-250)*4 + 550;
        printf("Amount is :%d",a);
    }
    printf("\nFinal amount :%d",a+20);
    
}