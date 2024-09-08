#include <stdio.h>

int main(){
    int a=4;
    int* ptra=&a;
    printf("The value of a is %d",*ptra);
    printf("The address of a is %d",ptra);
    return 0;
}