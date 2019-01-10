#include <stdio.h>
#include <math.h>
int main (){

    /*Declaring and initializing variables*/
    int a,b,c,p,area=0;

    /*prompt to take the length of side 1*/
    printf("\nLength of side1: ");
    scanf("%d",&a);

    /*prompt to take the length of side 2*/
    printf("\nLength of side2: ");
    scanf("%d",&b);

    /*prompt to take the length of side 3*/
    printf("\nLength of side3: ");
    scanf("%d",&c);

    /*calculation*/
    p = (a+b+c)/2;
    area = sqrt(p*(p-a)*(p-b)*(p-c));

    /*showing Results*/
    printf("\n= Solution = ");
    printf("\n\n* Area of the given triangle is : %d",area);
    getch();
    return 0;
}
