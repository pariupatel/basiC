//28
//factorial using i--
#include <stdio.h>

int main(){
    int n,f=1,c;
    printf("Enter a number to get its factorial value: ");
    scanf(" %d",&n);
    c=n;

    while(1<=n){
        f=f*n;
        n=n-1;
    }

    printf("The factorial value of %d is %d",c,f);
    return 0;
}