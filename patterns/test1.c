
#include <stdio.h>
int main()
{
    int n, count = 1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", count);
            count++;
            if(count==n+1)
                break;
            printf(", ");
        }
        printf("\n");
        if(count==n+1)
            break;
    }
}