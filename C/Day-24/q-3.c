#include<stdio.h>
void divideNumbers(float a1, float b1){
printf("%.2f",a1/b1);

}
void main(){
    float a,b; 
    printf("Enter Value :");
    scanf("%f",&a);
    printf("Enter Value :");
    scanf("%f",&b);
    if (b>0)
    {
        divideNumbers(a,b);
    }else{
        printf("Can't use zero");
    }
    
   
}