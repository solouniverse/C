// x > y
// x = 5, y = 2

#include <stdio.h>
int product(int x, int y);

int main()
{
    int x, y;
    printf("Enter the value of x & y\n");
    scanf("%d%d", &x, &y);
    int result = product(x, y);
    printf("Multiply of %d * %d is %d", x, y, result);
}

int product(int x, int y)
{
    if (x < y)
    {
        return product(y, x);
    }
    else if (y != 0)
    {
        return (x + product(x, y - 1));
    }
    else
        return 0;
}
// x = 5, y = 2
// 5 + (5, 2-1)
// 5 + (5, 1)
// 5 + 5 + (5, 0)
// 5 + 5 + 0

//x = 2, y = 5;