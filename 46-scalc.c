#include <stdio.h>
int main()

{
    int choice;
    float a,b,result;

    printf("Simple calculator\n");
    printf("Operations:""\n1. Addition" "\n2. Subtraction" "\n3. Multiplication" "\n4. Division");
    printf("\n\nPlease enter your choice of operation (in number): ");
    scanf("%d",&choice);
    
    if(choice>=1 && choice<=4){
            printf("\nEnter two numbers separated by spaces: ");
            scanf("%f %f", &a, &b);
    }
    else {
        printf("Please enter a valid choice");
        return 1;
            }

    switch(choice)
    {
    case 1: result = a+b; 
     printf("Result = %.2f", result);
            break;
    case 2: result = a-b; 
        printf("Result = %.2f", result);
            break;
    case 3: result = a*b; 
        printf("Result = %.2f", result);
            break;
    case 4: if(b!=0){
            result = a/b;
            printf("Result = %.2f", result);
             } else {
                    printf("Error");
                    return 1;
                     }
                break;

    default: printf("Please enter a valid choice");
    return 1;
    

}
    return 0;
}