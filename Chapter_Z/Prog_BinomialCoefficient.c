//WAP to calculate Binomial coefficient C(n,r) or nCr= n!/((n-r)!*r!) using factorial function recursively
// n ≥ k ≥ 0 or 0 <= k <= n
//nCr => nCn 1, nC1 n, 1C1 1, nC0 1
#include <stdio.h>
int fact(int n);

int main()
{
    int n, r, result;
    printf("Enter the value of n & r (0<=r<=n)\n");
    scanf("%d%d", &n, &r);

    if (r == 0 || r == n)
        result = 1;

    if (r > n)
    {
        result = 0;
    }
    else
    {
        result = fact(n) / (fact(r) * fact(n - r));
    }

    printf("\n nCr(%d, %d) = %d", n, r, result);

    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}