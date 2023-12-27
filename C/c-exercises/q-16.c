// 16. Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.
// Test Data :
// Input the amount: 375
// Expected Output:
// There are:
// 3 Note(s) of 100.00
// 1 Note(s) of 50.00
// 1 Note(s) of 20.00
// 0 Note(s) of 10.00
// 1 Note(s) of 5.00
// 0 Note(s) of 2.00
// 0 Note(s) of 1.00

#include<stdio.h>
int main(){
    float note,a,b,c,d,e,f,g;

    printf("Enter amount :");
    scanf("%f",&note);

    a=note/100;
    printf("%d Note(s) of 100.00\n",(int)a); 

    b = (((float)a-(int)a)*(100)/50);
    printf("%d  Note(s) of 50.00\n",(int)b);

    c = (((float)b-(int)b)*(50)/20);
    printf("%d Note(s) of 20.00\n",(int)c);

    d = (((float)c-(int)c)*(20)/10);
    printf("%d Note(s) of 10.00\n",(int)d);

    e = (((float)d-(int)d)*(10)/5);
    printf("%d Note(s) of 5.00\n",(int)e);

    f = (((float)e-(int)e)*(5)/2);
    printf("%d Note(s) of 2.00\n",(int)f);

    g = (((float)f-(int)f)*(2)/1+1);
    printf("%d Note(s) of 1.00\n",(int)g);

}