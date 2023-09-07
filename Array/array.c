#include <stdio.h>

// FUNCTION PROTOTYPE
// void twoDArray(int, int, int[]);

void length(int *array) {
    // return sizeof(array)/sizeof(array[0]);
    // for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
    //     printf("%d\n", array[i]);
    // }
    printf("%d", sizeof(array));
    // printf("%d", array[9]);s
}

int main() {

    int numbers[] = {
        1,2,3,4,5,6,7,8,9,10
    };

    double prices[] = {
        5.0,
        10.0,
        15.0,
        25.0,
        20.0
    };
    // one item of array is 8 bytes and equal to 32 bits
    // printf("%d\n", sizeof(prices));

    // printf("%lf", prices[0]);
    // printf("%d", sizeof(numbers));

    // for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
    //     printf("%d\n", numbers[i]);
    // }

    // int lg = length(numbers);
    // twoDArray(2,2,numbers);
    // printf("%d", lg);
    length(numbers);

    return 0;
}

// void length(int array[]) {
//     // return sizeof(array)/sizeof(array[0]);
//     for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
//         printf("%d\n", array[i]);
//     }
// }

// void twoDArray(int numbersOfRaws, int numbersOfCols, int numbers[]) {

//     int numbersArray[numbersOfRaws][numbersOfCols];

//     printf("%d", sizeof(numbers));

//     for(int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
//         printf("%d\n", numbers[i]);
//     }
// }