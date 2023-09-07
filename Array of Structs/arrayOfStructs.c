#include <stdio.h>

struct Student
{
    char name[15];
    float gpa;
};

int main()
{
    struct Student student1 = {"Joshua", 3.07};
    struct Student student2 = {"Joel", 3.80};
    struct Student student3 = {"Sven", 3.98};
    struct Student student4 = {"QT", 3.20};

    struct Student students[] = {student1, student2, student3, student4};
    int size = sizeof(students)/sizeof(students[0]);

    for(int i = 0; i < size; i++)
    {
        printf("Student Name : %s\n", students[i].name);
        printf("Student GPA : %.2f\n\n", students[i].gpa);
    }
    return 0;
}