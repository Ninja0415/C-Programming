/*
Mayuresh Mene
FE Computers
DIV C
UIN 251P016
Roll no. 15
*/
#include <stdio.h>

void counter() {
    static int c = 0;
    c++;
    printf("Function called %d times\n", c);
}

int main() {
    for(int i=0; i<1; i++)
        counter();
        counter();
        counter();
        counter();
    return 0;
}
