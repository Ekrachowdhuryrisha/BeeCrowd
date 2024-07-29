#include <stdio.h>
int main ()
{
    int x, y, i, r;

    scanf("%d %d", &x, &y);

    if (y < x)
    {
        r = x;ccccccc
        x = y;
        y = r;

    }

    for (i = x + 1; i < y; i++)
    {
        if (i % 5 == 3 || i % 5 == 2)
        {
            printf("%d\n", i);

        }
    }
}
