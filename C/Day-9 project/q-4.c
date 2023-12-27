#include<stdio.h>
int main(){
    int a;
    printf(" 1. Espresso - $2.50\n 2. Latte - $3.00\n 3. Cappuccino - $3.50\n 4. Americano - $2.75\n");

    printf("Enter Your Choice :");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("Espresso - $2.50");
        break;
    case 2:
        printf("Latte - $3.00");
        break;
    case 3:
        printf("Cappuccino - $3.50");
        break;
    case 4:
        printf("Americano - $2.75");
        break;
    
    default:
        printf("Enter valid choice");
        break;
    }
}