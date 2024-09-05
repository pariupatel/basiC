#include <stdio.h>
int main()
//multiplication table tutorial 19
{
    int n,i=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("\n\nMultiplication table of %d\n",n);

    for(i=1;i<=10;i++){
    printf("\n%d x %d = %d",n,i,n*i);
    }

}