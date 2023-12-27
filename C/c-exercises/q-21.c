// 21. Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
// Test Data :
// Input an integer: 15
// Expected Output:
// Range [0, 20]

#include<stdio.h>
int main(){
    int a;
    printf("Enter value :");
    scanf("%d",&a);

    if (a>=0 && a<=20)
    {  
        printf("Range [0 , 20]");
        
    }else if (a>=21 && a<=40)
    {
          printf("Range [21 , 40]");
    }else if (a>=41 && a<=60)
    {
          printf("Range [41 , 60]");
    }else if (a>=61 && a<=80)
    {
          printf("Range [61 , 80]");
    }
    else{
        printf("Invalid value");
    }
    
}