#include <stdio.h>

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

