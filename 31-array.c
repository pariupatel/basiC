#include <stdio.h>

int main()
{
    //2D array
    int marks[2][4]={{1,2,3,4},{4,3,2,1}};
    
    for (int i = 0;i < 2; i++){
        for (int j = 0; j < 4; j++){
            printf("The (%d,%d)th element is %d\n",i,j,marks[i][j]);
        }
        
    }
    

    /* 1D array
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %dth element of the array\n",i);
        scanf("%d", &marks[i]);
    }

     for (int i = 0; i < 4; i++)
    {
        printf("The value of %dth element of the array is %d\n",i,marks[i]);
    }
    return 0;
    */
    
    /*basic
    int marks[4]={12,13,15,14};
    printf("marks of student 1 is %d\n",marks[0]);
    printf("marks of student 2 is %d\n",marks[1]);
    printf("marks of student 3 is %d\n",marks[2]);
    printf("marks of student 4 is %d\n",marks[3]);
    return 0;

    */
   return 0;
}