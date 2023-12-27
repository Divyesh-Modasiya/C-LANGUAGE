#include<stdio.h>
int main(){
    float a,b,c;
    int d;
    printf("Enter value :");
    scanf("%f",&a);

    a = a/100;
    printf("%d\n",(int) a);


    b=(float)a-(int)a;
    b= b*10;
    printf("%d\n",(int)b);

    c=(float)b-(int)b;
    c= c*10;
    printf("%d\n",(int)c);

    d = (int)a + (int)b + (int)c;
    printf("%d",d);
    
}