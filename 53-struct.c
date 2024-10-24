#include <stdio.h>

struct personal{
    char name[20];
    char doj[25];
    float salary;
};

int main(){
    struct personal p[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the information of Employee %d\n",i+1);
        printf("Enter name: ");
        scanf("%s",p[i].name);
        printf("Enter date of joining: ");
        scanf("%s",p[i].doj);
        printf("Enter salary: ");
        scanf("%f",&p[i].salary);
    }
    
    printf("Name\tDate of joining\tSalary\n\n");
    
    for(i=0;i<5;i++){
        printf("%s\t%s\t%f\n",p[i].name,p[i].doj,p[i].salary);
    }
}