#include <stdio.h>
int main()
{
    int i, j, n, a[100], count, m[100],max=0,pos=-1;
    printf("Enter size of array: \n");
    scanf("%d", &n);
    printf("Enter elements in array: \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                m[j]=-1;
            }
        }
        if (m[i] != -1)
        {
            m[i] = count;
        }
    }
    printf("\nFrequency of elements:\nNumber-Frequency\n");
    for (i = 0; i < n; i++)
    {
        if (m[i] != -1)
        {
            printf("%d \t%d\n", a[i], m[i]);
        }
        if(m[i]>max)
        {
                max=m[i];
                pos=i;
        }
    }
    printf("Most repeated element:%d repeated %d times.",a[pos],m[pos]);
    return 0;
}