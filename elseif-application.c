#include <stdio.h>
int main()

{
    //print the type of gift you are giving to them
    // maths and science 45 only maths 15 only science 15
    int n;
    printf("Which subjects did you pass?\n");
    printf("Enter 1 if you passed in both Maths and Science\nEnter 2 if you passed only in Maths\nEnter 3 if you passed only in Science\n");
    scanf("%d",&n);

    if(n==1) {
        printf("Congratulations! You won a prize worth 45rs.");
    }
    else if(n==2){
        printf("Congratulations! You won a prize worth 15rs");
    }
    else if(n==3){
        printf("Congratulations! You won a prize worth 15rs");
    }
    else{
        printf("Please enter a valid choice");
    }
}