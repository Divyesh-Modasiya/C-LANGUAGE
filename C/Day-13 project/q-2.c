#include<stdio.h>
#include <stdbool.h>
int main(){
    int number;
    int i;
    bool flag = true;

    printf("Enter a number : ");
    scanf("%d", &number);

    for (i = 2; i <= number/2; i++)
    {
        if(number % i == 0){
            flag = false;
            break;
        }
    }

    if(flag){
        printf("%d is Prime number",number);
    }

    else{
        printf("%d is not a prime number",number);
    }
    
}