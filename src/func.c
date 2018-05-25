#include <stdio.h>
#include <stdlib.h>

int get_input()
{
    int x;
    printf("Enter number between 1 and 10: ");
    scanf("%d", &x);
    return x;
}

int check_input(int i, int m)
{
    if (i < 1 || i > 10 || i > m) {
        return 0;
    }
    else {
        return 1;
    }
}

int make_turn(int i, int* m)
{
    if (check_input(i, *m)) {
        *m -= i;
        return 1;
    }
    else {
        return 0;
    }
}

int get_order()
{
    int x;
    printf("Who goes first?\n1 - player\n2 - computer\n");
    scanf("%d", &x);
    if (x == 1 || x == 2) {
        return x - 1;
    }
    else {
        printf("Incorrect input\n");
    }
    return -1;
}

int calculate(int m)
{
    if (m <= 10 && m >= 2)
        return m - 1;
    if (m == 11)
        return 10;
    int i;
    int target[8] = { 89, 78, 67, 56, 45, 34, 23, 12 };
    int d;
    for (d; d < 8; d++) {
        i = m - target[d];
        if (check_input(i, m)) {
            return i;
        }
    }
    do {
        i = rand() % 10 + 1;
    } while (!(check_input(i, m)));
    return i;
}
