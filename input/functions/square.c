#include <stdio.h>

int square(int x)
{
    return x * x;
}

int main()
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("The square of the number is %d", square(x));

    return 0;
}