#include <stdio.h>
#include <string.h>
#include "func.h"

void pvp();

int main(int argc, char* argv[])
{
    if (argv[1] == NULL || !(strcmp(argv[1], "pvp"))) {
        pvp();
    }
    else {
        pvp(); // TODO
    }
}

void pvp()
{
    int h = 100; // matches
    int p = 0; // player
    int i; // input
    while (h) {
        printf("Player %d turn. %d matches left.\n", p + 1, h);
        i = get_input();
        if (make_turn(i, &h)) {
            p = 1 - p;
        }
        else {
            printf("Incorrect input\n");
        }
    }
    printf("Player %d won!\n", p + 1);
}

