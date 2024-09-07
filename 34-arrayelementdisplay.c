#include <stdio.h>

int main(){
    int array[2][3]={{2,3,4},
                     {5,6,7}};
    int i,j;
    while(1){
    printf("Write the row and column of the element to be displayed: ");
    scanf(" %d %d",&i,&j);
    if(i<2){
        if(j<3){
            printf("The element in row %d and column %d is %d\n",i,j,array[i][j]);
        }//nested if
    }//main if block
    else{
        printf("Enter a valid choice.\n");
    }//else block
    }//while loop
    return 0;
}//main function