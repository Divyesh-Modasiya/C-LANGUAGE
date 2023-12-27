#include<stdio.h>
int main(){
    int a = 10;
    int b = 0;
    int c = 1;
    int d,e,i;

    printf("Enter value :");
    scanf("%d",&e);

    for ( i = 0; i < e; i++)
    {
        if (i<=1)
        {
            d = i;
        }else{
            d = b + c;
            b = c;
            c = d; 
        }
        printf("%d\n",d);
    }
    

}
