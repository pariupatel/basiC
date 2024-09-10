#include <stdio.h>
int main()
{
    char a;
    int n;

    while (1)
    {

        printf("Enter 'a' for ascending order or 'd' for descending order.\n");
        printf("Enter the order of the triangular star pattern: ");
        scanf(" %c", &a);

        switch (a)
        {
        case 'a':

            printf("Enter the number of lines of the output: ");
            scanf(" %d", &n);

            // ascending order
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("*");
                } // nested for loop
                printf("\n");
            } // for loop
            break;

        case 'd':

            printf("Enter the number of lines of the output: ");
            scanf(" %d", &n);

            // descending order
            for (int i = 1; i <= n; i++)
            {
                for (int j = n; j >= i; j--)
                {
                    printf("*");
                } // nested for loop
                printf("\n");
            } // for loop
            break;

        default:
            printf("Enter a valid input.");
            break;
        } // switch statement
    } // while loop
    return 0;
} // int main