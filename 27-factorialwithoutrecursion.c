#include <stdio.h>

int main(){
    //finding factorial without recursion
    int n,f=1,i;
    printf("Enter a number to get its factorial: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("The factorial of %d is %d",n,f);
    return 0;
}