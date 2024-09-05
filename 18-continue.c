#include <stdio.h>

int main() {
    int i, age;
    for (i = 0; i < 10; i++) {
        printf("%d\nEnter your age: ", i);
        scanf(" %d", &age);  // Notice the space before %d
        
        if (age > 10) {
            continue;
        }
        
        printf("Hello world!\n");
        printf("Hello world!\n");
        printf("Hello world!\n");
        printf("Hello world!\n");
        printf("Hello world!\n");
    }
    return 0;
}
