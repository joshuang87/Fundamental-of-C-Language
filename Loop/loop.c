#include <stdio.h>

int main() {

    //  FOR LOOP
    // for(int i = 1;  i <= 10; i++) {
    //     printf("%d\n", i);
    // }

    char name[25];

    // printf("\nWhat's  your name?: ");
    // fgets(name, 25, stdin);
    // name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("\nYou did not enter your name");
        printf("\nWhat's Your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
}