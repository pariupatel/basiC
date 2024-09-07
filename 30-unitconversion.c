//30 unit conversion
/* kms to miles
inches to foot
cms to inches
pounds to kgs
inches to meters*/

#include <stdio.h>

int main()

{
    int a;
    float n1,n2;
    printf("Choose the conversion from below:\n\n1. kms to miles   2. inches to foot   3. cms to inches   4.pound to kgs   5. inches to meters\n\n");
    
    while(1){
    printf("Enter your choice in number: ");
    scanf(" %d", &a);

    if(a==1 || a==2 || a==3 || a==4 || a==5){

    switch(a){
        case 1: //kms to miles
        printf("Enter the distance in kms: ");
        scanf(" %f", &n1);
        n2=n1*0.621371;
        printf("%.2f kms distance is %.2f in miles.\n\n",n1,n2);
        break;

        case 2: //inches to foot
        printf("Enter the measurement in inches: ");
        scanf(" %f", &n1);
        n2=n1/12;
        printf("The measurement %.2f inches is %.2f feet.\n\n",n1,n2);
        break;

        case 3: //cms to inches
        printf("Enter the measurement in cms: ");
        scanf(" %f", &n1);
        n2=n1/2.54;
        printf("The measurement %.2f cms is %.2f inches.\n\n",n1,n2);
        break;

        case 4: //pounds to kgs
        printf("Enter the weight in pounds: ");
        scanf(" %f", &n1);
        n2=n1*0.453592;
        printf("Weight of %.2f pounds is %.2f kgs.\n\n",n1,n2);
        break;

        case 5: //inches to meters
        printf("Enter the measurement in inches: ");
        scanf(" %f", &n1);
        n2=n1*0.0254;
        printf("The measurement %.2f inches is %.2f meters.\n\n",n1,n2);
        break;

        default:
        printf("Enter a valid choice.\n\n");
        break;
       
    } //switch statement
    } //if block
    else{
        printf("Enter a valid choice.\n\n");
    } //else block
    } //while loop

    return 0;
}