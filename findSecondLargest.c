#include <stdio.h>

int main()
{
    int t, res;

    printf("Number of tested : ");
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if (a > b)
        {
            if (a > c)
            {
                if (b > c)
                    res = b;
                else
                    res = c;
            }
            else
                res = a;
        }
        else if (b > c)
        {
            if (a > c)
                res = a;
            else
                res = c;
        }
        else
            res = b;

        printf("%d\n", res);
    }

    return 0;
}