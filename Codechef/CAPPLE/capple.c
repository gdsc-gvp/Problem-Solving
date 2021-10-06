// https://www.codechef.com/problems/CAPPLE
#include <stdio.h>

int main()
{
    long int hash[100000], input[100000], n, temp, i, count = 0;
    int t;

    scanf("%d", &t);
    while (t--)
    {

        for (i = 0; i < 100000; i++)
        {
            hash[i] = 0;
            input[i] = 0;
        }

        count = 0;

        scanf("%ld", &n);

        temp = n;
        while (n > 0)
        {
            scanf("%ld", &input[n - 1]);
            n--;
        }
        for (i = 0; i < temp; i++)
        {
            hash[input[i]]++;
        }

        for (i = 0; i < 100000; i++)
        {
            if (hash[i] > 0)
            {
                count++;
            }
        }
        printf("%ld\n", count);
    }

    return 0;
}
