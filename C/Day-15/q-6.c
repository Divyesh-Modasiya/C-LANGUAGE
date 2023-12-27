// Q.6 Write a Program to print the below pattern using nested for loop.
//            *
//         * * *
//       * * * * *
//    * * * * * * *
// * * * * * * * * * 


#include<stdio.h>
int main(){
    int i,j,c;
    for ( i = 1; i <= 5; i++)
    {
        for ( c = 4; c >= i; c--)
        {
            printf("  ");
        }
        

        for ( j = 1; j <= 2*i-1; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    } 
    
}