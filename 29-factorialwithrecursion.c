#include <stdio.h>

int factorial(int n){
    
    if(n==1 || n==0){
        return 1;
    }
    else{
        return (n*factorial(n-1));
    }
}

int main(){
    int nr;
    printf("Enter a number to get its factorial value: ");
    scanf("%d", &nr);

    if(nr<0){
        printf("Factorial is not defined for negative integers.");
    }
    else{
    printf("\nThe factorial of %d is %d.",nr,factorial(nr));
    return 0;
    }
}