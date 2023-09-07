#include <stdio.h>

enum Day{Sun = 0, Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6};

int main()
{
    enum Day today = Sun;

    printf("%d", today);
    
    return 0;
}