#include <stdio.h>
int main()

{
    int i=1,a;
    printf("Enter a number: ");
    scanf("%d",&a);

    while(i<=a){
        printf("%d\n",i);
        i=i+1;
    }
}