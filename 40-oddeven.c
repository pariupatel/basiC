#include <stdio.h>
//even or odd number checker
int main() {
    int n;
    printf("Enter the number: ");
    scanf(" %d", &n);
    
    if(n%2 == 0){
        printf("%d is an even number.",n);
    }//if block
    else{
        printf("%d is an odd number.",n);
    }//else block
    return 0;
}