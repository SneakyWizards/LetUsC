#include <stdio.h>
//#include <fenv.h>

int main(){
    float a = 5,b = 2;
    int c,d;

    c = a % b; // error: invalid operands to binary % (have 'float' and 'float')
/**
    % can only be applied to integers.
    we can use fmod() for % of floats.
    c = fmod(a,b);
**/
    d = a / 2;

    printf("d = %d\n",d);
    return 0;
}
