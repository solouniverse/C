#include <stdio.h>

int main()
{
    int i = 1;
L:
    if (i > 2)
    {
        printf("Saturday\n");
        i = i - 1;
        goto L;
    }
    printf("Sunday\n");
}