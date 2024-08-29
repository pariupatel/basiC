#include <stdio.h>
int main()

{
    const int a = 100;
    //does not run when we try to assign another value to it for example a=19
    printf("The maximum value is: %d\n", a);

    return 0;
}
