#include <stdio.h>

//  FUNCTION PROTOTYPE
void hello(char[], int);

int main() {

    char name[] = "Joshua";
    int age = 20;

    // code below with error
    // hello(name);
    hello(name,age);

    return 0;
}

void hello(char name[], int age) {
    printf("\nHello %s",  name);
    printf("\nYou are %d years old", age);
}