#include <stdio.h>

int main(){
    long int num;
    int digit1,digit2,digit3,digit4,digit5,sum=0;
    printf("Enter 5 digit Number : ");
    scanf("%ld",&num);

    digit1 = num % 10;
    num = num / 10;

    digit2 = num % 10;
    num = num / 10;

    digit3 = num % 10;
    num = num / 10;

    digit4 = num % 10;
    num = num / 10;

    digit5 = num % 10;
    num = num / 10;

    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    printf("Sum of Digits = %d", sum);
    getch();

    return 0;
}
