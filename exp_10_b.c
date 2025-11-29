/*
Mayuresh Mene
FE Computers
DIV C
UIN 251P016
Roll no. 15
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    int *p = a + n - 1;

    printf("Reverse: ");
    for(int i=0;i<n;i++)
        printf("%d ", *(p - i));

    return 0;
}
