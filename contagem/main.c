#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    while (n < 100000) {
        n++;
        printf("[%d]\n", n);
    }

    do {
        n--;
        printf("[%d]\n", n);
    } while (n <= 100000 && n > 0);

    return 0;
}
