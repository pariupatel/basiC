#include <stdio.h>
int main()

{
    int i=1,a;
    printf("Enter a number: ");
    scanf("%d",&a);

    do{
        printf("%d",i);
        i=i+1;
    }while(i<=a);

    return 0;
}
