// 4. Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'

// Expected Output:
// The reverse of XML is LMX

#include <stdio.h>
int main(){
    char a = 'X';
    char b = 'M';
    char c = 'L';

    printf("Characters is : %c %c %c\n",a,b,c);
    printf("Revers Characters is : %c %c %c",c,b,a);
}