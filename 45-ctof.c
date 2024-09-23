//celsius to fahrenheit

#include <stdio.h>
int main()

{
    float c;
    printf("Enter the temperature in celsuis: ");
    scanf("%f",&c);
    printf("The temperature in fahrenheit is %.2f", (c*9/5)+32);

    return 0;
}