/*
Mayuresh Mene
FE Computers
DIV C
UIN 251P016
Roll no. 15
*/
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
        i++;

    printf("Length = %d", i);
    return 0;
}
