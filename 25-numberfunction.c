#include <stdio.h>

// function without argument with return value

int numbertaker()

{
    int n;
    printf("Enter a number: ");
    scanf(" %d",&n);

    return n;
}

int main()
{
    int i;
    i=numbertaker();
    printf("The number chosen is %d",i);
}
