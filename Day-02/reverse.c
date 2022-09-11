#include<stdio.h>
//Reversing alphabets from A-Z
int main(void) {


 char a = 'Z';
 while (a >= 'A')
 {
    putchar(a);
    --a;
 }
    putchar('\n');
    return 0;
}