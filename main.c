#include <stdio.h>
int findFib(int a)
{
    if (a == 1 || a == 2)
    {
        return 1;
    }
    else
    {
        return findFib(a - 1) + findFib(a - 2);
    }
}
int main()
{
    int number;
    printf("Enter the number ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("Fibonacci Series [%d] --> %d\n", i, findFib(i));
    }

    return 0;
}
