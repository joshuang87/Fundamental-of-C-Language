#include <stdio.h>

int findMax(int x, int y) {
    // if(x > y) {
    //     return x;
    // }
    // else {
    //     return y;
    // }
    return (x > y) ? x : y;
}

int main() {

    // Ternary Operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value id false

    int max = findMax(5,9);
    printf("%d",max);
    return  0;
}