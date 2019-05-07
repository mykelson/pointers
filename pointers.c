#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    int* d;
    c = 5;
    d = &c;

    int* f = malloc(sizeof(int));
    *f = 8;
    *d = *f;
    int g = *f;
    printf("%i\n", g);
}