#include <stdio.h>
int main()

{
    // else if ladder
    int age;
    printf("Please enter your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("You are eligible for voting.");
    }
    else if(age>10) {
        printf("You are eligible for voting and you can vote for kids.");
    }
    else{
        printf("You are not eligible for voting");
    }
}
