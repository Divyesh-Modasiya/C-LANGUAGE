#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First year :");
    scanf("%d",&a);
    printf("Enter Second year :");
    scanf("%d",&b);

    while (a<=b)
    {
        printf("%d\n",a);
        a+=4;
    }
    
}