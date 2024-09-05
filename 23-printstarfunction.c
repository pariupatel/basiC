#include <stdio.h>
void printstar(int n)
    //with arguments without return value

{
    int i;
    for(i=1;i<n;i++){
    printf("%c",'*');
    }

}

int main()
{
    printstar(9);
}

