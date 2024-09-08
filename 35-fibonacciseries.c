#include <stdio.h>

int fibo(int n)
{
    if(n==1||n==2){
        return 1;
    }//if block
    else{
        return fibo(n - 1) + fibo(n - 2);
    }//else block
}// fibo

int main()
{
    int i, m;
    printf("Enter the number of terms: ");
    scanf(" %d", &m);
    printf("\nThe fibonacci series upto %d terms: \n\n", m);

    for (int i = 1; i <= m; i++)
    {
        printf("%d ", fibo(i));
    }//for loop
    return 0;
}// int main