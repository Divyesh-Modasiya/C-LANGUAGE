#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value :");
    scanf("%d",&b);
    int c =0;
    for (a=1; a <= b; a++)
    {
        c+=a;
        
    }
    printf("%d\n",c);
    
}