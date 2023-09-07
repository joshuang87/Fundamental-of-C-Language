#include <stdio.h>
#include <string.h>

// ONLY typedef
// typedef char user[25];

// typedef with struct
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // NORMAL
    // char user1[25] = "Joshua";

    // USING ONLY typedef
    // user user1 = "Joshua";

    User user1 = {
        "Joshua",
        "123456789",
        535234
    };

    User user2 = {
        "Joel",
        "enzo1234",
        97414
    };

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

}