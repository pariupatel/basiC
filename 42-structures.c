#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    int marks;
    char fav_char;
};

int main() {
    char name[20];
    struct Student harry, ravi, subho;

    harry.id = 1;
    ravi.id = 2;
    subho.id = 3;
    harry.marks = 100;
    ravi.marks = 75;
    subho.marks = 60;
    harry.fav_char = 'p';
    ravi.fav_char = 'c';
    subho.fav_char = 'm';

    printf("Enter the name of the student: ");
    scanf("%s", name);

    while (1) {
        if (strcmp(name, "harry") == 0) {
            printf("%s's id is %d, has got %d marks, and fav-char is '%c'\n", name, harry.id, harry.marks, harry.fav_char);
            break;
        } else if (strcmp(name, "ravi") == 0) {
            printf("%s's id is %d, has got %d marks, and fav-char is '%c'\n", name, ravi.id, ravi.marks, ravi.fav_char);
            break;
        } else if (strcmp(name, "subho") == 0) {
            printf("%s's id is %d, has got %d marks, and fav-char is '%c'\n", name, subho.id, subho.marks, subho.fav_char);
            break;
        } else {
            printf("Enter a valid name: ");
            scanf("%s", name);
        }//switch case
    }//while loop

    return 0;
}
