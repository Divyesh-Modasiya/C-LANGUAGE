#include <stdio.h>
int main(){
    int a = 1,b = 0;

    while (a<=50)
    {   
        if (a%8==0)
        {
        printf("%d\n",a);
          b++;
        }
        if (b==5){
         
            break;
        }
        
        a++;
    }
    
}