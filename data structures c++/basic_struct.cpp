#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Player {
    char *name;
    int points;
};

int main() {

    struct Player Player1;
    struct Player *P1 = (struct Player*)malloc(sizeof(struct Player));

    P1->name = (char *)malloc(8 * sizeof(char));

    strcpy(P1->name, "testing");

    P1->name[7] = '\0';
    char name[] = "testing";

    return 0;
}