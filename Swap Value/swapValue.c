#include <stdio.h>
#include <string.h>

int main() {

    // char x[] = "Joshua";
    // char y[] = "Joel";
    // char temp[15];

    // give them a static length to avoid the error below
    char x[15] = "Joshua";
    char y[15] = "Joel";
    char temp[15];

    strcpy(temp, x);
    //  if length of y is less than length of x, it will be cause some error
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);
}