// quiz program

#include <stdio.h>
int main()

{
    char a;
    int m=0;

    printf("\nQuiz game\n\n");
    printf("Choose a,b,c or d from the options.\n\n");

    // question 1
    printf("1. What is the capital of India?\n");
    printf("a. Mumbai   b. Kolkata   c. New Delhi   d. Bengaluru\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
     }
    // question 2
    printf("2. Which planet is known as Red-planet?\n");
    printf("a. Earth   b. Mars   c. Venus   d. Jupiter\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'c':
        printf("The answer is incorrect.\n");
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 3
    printf("3. Which element has the chemical symbol 'O'?\n");
    printf("a. Gold   b. Hydrogen   c. Oxygen  d. Carbon\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 4
    printf("4. What is the largest mammal in the world?\n");
    printf("a. Elephant   b. Giraffe   c. Polar Bear   d. Blue whale\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is incorrect.\n");
        break;

        case 'd':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 5
    printf("5. Which is the longest river in the world?\n");
    printf("a. Nile River   b. Amazon River   c. Yangtze River   d. Mississipi River\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is incorrect.\n");
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 6
    printf("6. Who painted the Mona Lisa?\n");
    printf("a. Vincent Van Gogh   b. Pablo Picasso   c. Leonardo Da Vinci   d. Michelangelo\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 7
    printf("7. What is the smallest prime number?\n");
    printf("a. 0   b. 2   c. 1   d. 3\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'c':
        printf("The answer is incorrect.\n");
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 8
    printf("8. Which language is the most spoken language?\n");
    printf("a. Hindi   b English    c. Spanish   d. Mandarin(Chinese)\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is incorrect.\n");
        break;

        case 'd':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 9
    printf("9. Who is known as the father of Computer?\n");
    printf("a. Charles Babbage   b. Alan Turing   c. Steve Jobs   d. Bill Gates\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is incorrect.\n");
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // question 10
    printf("10. What is the hardest substance on earth?\n");
    printf("a. Gold   b. Silver   c. Diamond   d. Iron\n");
    printf("Enter the answer: ");
    scanf(" %c",&a);
     switch(a){
        case 'a':
        printf("The answer is incorrect.\n");
        break;

        case 'b':
        printf("The answer is incorrect.\n");
        break;

        case 'c':
        printf("The answer is correct.\n");
        m=m+1;
        break;

        case 'd':
        printf("The answer is incorrect.\n");
        break;

        default:
        printf("Enter a valid choice\n");
        break;
    }
    // Display marks

    if(m>=0 && m<=3){
        printf("\nVery Poor! You got %d questions correct.",m);
    }
    else if(m>3 && m<=6){
        printf("\nYou got %d questions correct.");
    }
    else if(m>6 && m<=9){
        printf("\nCongratulations! You got %d questions correct!",m);
    }
    else {
        printf("\nPerfect! You got 10 questions correct!");
    }
    //    printf("\nYou secured %d marks",m);
    // switch for marks
    /* switch(a){
        case a:
        printf("The answer is correct.");
        m=m+1;
        break;

        case b:
        printf("The answer is correct.");
        break;

        case c:
        printf("The answer is correct.");
        break;

        case d:
        printf("The answer is correct.");
        break;

        */
       return 0;
}