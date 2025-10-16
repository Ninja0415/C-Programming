 /*
    Mayuresh Mene
    F.E. Computer
    Div C
    251P016
    */
#include<stdio.h>
int main()
{
    int Phy;
    int Chem;
    int Math;
    float Avg;
    printf("Enter Physics Marks= ");
    scanf("%d",&Phy);
    printf("Enter Chemistry Marks= ");
    scanf("%d",&Chem);
    printf("Enter Maths Marks= ");
    scanf("%d",&Math);
    Avg=(Phy+Chem+Math)/3;
    printf("Avg= %f \n",Avg);
    Avg>50?printf("Student is eligible"):printf("Student is ineligible");
}