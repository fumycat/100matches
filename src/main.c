#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"

void pvp();
void pve();

int main(int argc, char* argv[])
{
    if (argv[1] == NULL || !(strcmp(argv[1], "pve"))) {
        pve();
    }
    else {
        pvp();
    }
}

void pvp()
{
    int count = 1;
    int h = 100; // matches
    int p = 0; // player
    int i; // input
    while (h) {
        printf("%d)Player %d turn. %d matches left.\n", count, p + 1, h);
        i = get_input();
        if (make_turn(i, &h)) {
            p = 1 - p;
            printf("\n");
            count++;
        }
        else {
            printf("Incorrect input\n");
        }
    }
    printf("Player %d won!\n", p + 1);
}

void pve()
{
    int p = -1; // player
    while (p == -1) {
        p = get_order();
    }
    int count = 1;
    int h = 100; // matches
    int i; // input
    while (h) {
        if (!p) {
            printf("%d)You turn. %d matches left.\n", count, h);
            i = get_input();
            if (make_turn(i, &h)) {
                p = 1 - p;
                printf("You take %d matches. %d matches left.\n\n", i, h);
                count++;
            }
            else {
                printf("Incorrect input\n");
            }
        }
        else {
            if (h == 100) {
                printf("Computer turn. %d matches left.\n", h);
            }
            int r = 0;
            do {
                i = calculate(h);
                r = make_turn(i, &h);
            } while (!r);
            p = 1 - p;
            printf("%d)Computer take %d matches.\n\n", count, i);
            count++;
        }
    }
    if (!p) {
        printf("You won!");
    }
    else {
        printf("Computer won!");
    }
}
