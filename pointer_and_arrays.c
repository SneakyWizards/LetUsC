#include <stdio.h>

int main(){
    int A[]={2,4,6,8};
    int array_len = sizeof(A)/sizeof(A[0]);

    for (int i=0; i< array_len; i++){
        printf("Address = %d\n",&A[i]);
        printf("Address = %d\n",A+i);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n\n",*(A+i));
    }
}
