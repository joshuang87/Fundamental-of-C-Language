#include <stdio.h>

int main() {

    int x;
    x = 123;

    int y = 321;

    float gpa = 3.0;

    char grade = 'B';   // SINGLE CHARACTER
    char name[] = "Joshua";     // ARRAY OF CHARACTERS

    printf("Hello %s\n",name);
    printf("Your GPA is %f\n",gpa);
    printf("Your grade is %c",grade);
    return 0;
}