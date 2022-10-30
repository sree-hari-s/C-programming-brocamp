    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                m[j] = -1;
            }
        }
        if (m[i] != -1)
        {
            m[i] = count;
        }
    }