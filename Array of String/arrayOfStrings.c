#include <stdio.h>
#include  <string.h>

int main() {

    char cars[][10] = {
        "Mustang",
        "Corvette",
        "Camaro"
    };

    // CAN'T BELOW
    // cars[2] = "Tesla";
    strcpy(cars[2], "Tesla");

    printf("sizeof cars : %d\n",sizeof(cars));
    printf("sizeof cars[0] : %d\n",sizeof(cars[0]));

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
        printf("%s\n", cars[i]);
    }

    return 0;
}