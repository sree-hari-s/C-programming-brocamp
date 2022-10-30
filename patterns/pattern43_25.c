#include <stdio.h>
void main()
{
    int i, j, n = 4, tot = 0,m=2 * n - 1,  k = 0, l = n+1;
    for (i = 1; i <= 2 * n; i++)
    {
        if(i<=n)
        {    
            tot=2*i-1;
            k++;
        }
        else
        {
            tot=m;
            m -= 2;
            l--;
        }
        for (j = 1; j <= tot; j++)
        {
            if (j % 2 == 0)
                printf(" *");
            else if (i <= n)
            {
                printf("%2d", k);
            }
            else
            {
                printf("%2d", l);
            }
        }                      
        printf("\n");
    }
}