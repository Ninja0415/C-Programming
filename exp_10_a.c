/*
Mayuresh Mene
FE Computers
DIV C
UIN 251P016
Roll no. 15
*/
#include <stdio.h>

int main() {
    int a, b, *p, *q;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    p = &a;
    q = &b;

    printf("Sum = %d", (*p + *q));
    return 0;
}
