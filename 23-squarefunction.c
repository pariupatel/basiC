#include <stdio.h>

int square(int n)
{
    return n*n;
}

int main()
{
    int a,r;
    printf("Enter a number: ");
    scanf("%d",&a);
    r = square(a);
    printf("Square of %d is %d",a,r);
}
