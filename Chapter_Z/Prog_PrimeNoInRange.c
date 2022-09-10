#include <stdio.h>

int isPrime(int num);

int main()
{
    int n;
    int start;
    int end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for (start; start <= end; start++)
    {
        int prime = isPrime(start);
        printf("%d - %d %s\n", start, isPrime(start), prime ? "is prime" : "is not prime");
    }
}

int isPrime(int num)
{
    if (num % 2)
        return 1;
    else
        return 0;
}