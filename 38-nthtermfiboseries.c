#include <stdio.h>

int fib(int n)
{
    int a = 0, b = 1, nextTerm;

    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }

    for (int i = 3; i <= n; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return b;
}

int main()
{
    int n;

    printf("Enter the term number: ");
    scanf("%d", &n);

    int result = fib(n);
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
