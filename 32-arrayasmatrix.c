#include <stdio.h>

int main()
{
    int marks[2][3]={{1,2,5},{3,4,5}};
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}