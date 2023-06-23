#include <stdio.h>

int IsPrime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void generatePrime(int n1, int n2)
{
    printf("Prime numbers between %d and %d are: ", n1, n2);

    for (int i = n1; i <= n2; i++)
    {
        int m;
        m=IsPrime(i);
        if (m)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    generatePrime(start, end);
    return 0;
}