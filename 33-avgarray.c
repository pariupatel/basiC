#include <stdio.h>
//objective: finding the average score of a class in respective subjects and also the average of total marks scored
int main()
{
    //declaration of variables
    int mathSum=0, chemSum=0, phySum=0;
    //defining arrays for different subject marks
    int mathMarks[30]={97,44,87,74,74,71,81,84,74,63,65,87,72,56,93,78,97,81,72,68,62,57,42,87,64,52,89,76,62,62};
    int phyMarks[30] ={92,72,75,71,83,92,82,92,64,88,73,86,92,78,68,69,91,76,66,64,45,54,53,64,72,64,62,58,81,62};
    int chemMarks[30]={92,58,92,82,83,84,87,76,51,73,89,43,97,62,91,74,88,52,81,78,91,77,78,89,68,71,93,90,67,57};

    for(int i=0;i<30;i++){
            phySum=phySum+phyMarks[i];
            chemSum=chemSum+chemMarks[i];
            mathSum=mathSum+mathMarks[i];
    }//main for loop
    printf("The average score in Mathematics is %d out of 100.\n",mathSum/30);
    printf("The average score in Physics is %d out of 100.\n",phySum/30);
    printf("The average score in Chemistry is %d out of 100.\n",chemSum/30);
    printf("The average total score is %d out of 300.",(mathSum+phySum+chemSum)/30);
    return 0;
}// int main()