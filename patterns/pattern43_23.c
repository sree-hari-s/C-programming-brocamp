#include <stdio.h>
void main()
{
    int i, j, n = 6, tot;
    for (i = 1; i <= (2 * n); i++)
    {
        tot = i <= n ? i : 2 * n - i;
        for (j = 1; j <= tot; j++)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
}
/*if(i<=n)
        {
            tot=i;
        }
        else
            tot=2*n-i;  */
