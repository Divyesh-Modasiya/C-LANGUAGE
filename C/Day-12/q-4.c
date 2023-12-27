#include<stdio.h>
int main(){
    int a=20;
    do
    {
         if (a==24)
        {
            a++;
            continue;
        }   
        if (a%2 ==0)
        {
             printf("%d\n",a);
        }
        
       a++;
       
    } while (a<=30);
    
}