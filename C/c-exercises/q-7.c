// 7. Write a C program to display multiple variables.
// Sample Variables :
// a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
// Declaration :
// int a = 125, b = 12345;
// long ax = 1234567890;
// short s = 4043;
// float x = 2.13459;
// double dx = 1.1415927;
// char c = 'W';
// unsigned long ux = 2541567890;

// output:
// a + c =  212                                                           
// x + c = 89.134590                                                      
// dx + x = 3.276183                                                      
// ((int) dx) + ax =  1234567891                                          
// a + x = 127.134590                                                     
// s + b =  16388                                                         
// ax + b = 1234580235                                                    
// s + c =  4130                                                          
// ax + c = 1234567977                                                    
// ax + ux = 3776135780

#include<stdio.h>
int main(){
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;

printf("a + c = %d\n", a+c);
printf("x + c = %f\n", x+c);
printf("dx + x = %f\n", dx+x);
printf("((int) dx) + ax = %lf\n", ((a+b)*dx) + ax);
printf("a + x =  %f\n", a+x);
printf("s + b =  %d\n", s+b);
printf("ax + b =  %ld\n", ax+b);
printf("s + c =   %hd\n", s+c);
printf("ax + c =   %ld\n", ax+c);
printf("ax + ux =  %lu\n", ax+ux);
}