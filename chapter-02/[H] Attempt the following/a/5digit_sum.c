#include <stdio.h>

int main(){
    long int num;
    int digit,sum=0;
    printf("Enter 5 digit Number : ");
    scanf("%ld",&num);

    while(num != 0){
        digit = num%10;
        num /= 10;
        sum += digit;
    }

    printf("Sum of Digits = %d", sum);
    getch();

    return 0;
}
