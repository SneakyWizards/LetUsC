#include<stdio.h>

int main (){

    /*Declaring and initializing variables*/
    int value,digit1,digit2,digit3,digit4,digit5,reverse,temp;

    /*prompt to take the input*/
    printf("Please enter a five-digit number: ");

    /*Taking input*/
    scanf("%d",&value);
    temp = value ;

    /*Calculations*/
    digit1 = value % 10;

    /* e.g. if value is 12345 then 12345 % 10 gives 5*/
    value = value / 10;

    /* '12345/10' gives '1234.5' but this is integer division so digitit/s after '.' will
    be dropped and we get '1234'*/
    digit2 = value % 10;

    /*now '1234 % 10' gives '4' and so on*/
    value = value / 10;
    digit3 = value % 10;
    value = value / 10;
    digit4 = value % 10;
    value = value / 10;
    digit5 = value % 10;

    reverse = (digit1*10000) + (digit2*1000) + (digit3*100) + (digit4*10) + (digit5) ;

    /*showing Results*/
    printf("\n   Solution: ");
    printf("\n   __________");
    printf("\n\n   By reversing %d it becomes : %d",temp,reverse);
    getch();
    return 0;
}
