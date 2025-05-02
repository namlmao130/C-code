#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long a[n];
    long long b[100] = {0};
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        b[a[i]]++;
    }
    int cnt=0;
    for (long long i = 0; i < n; i++){
        if (b[a[i]] == 1) cnt++;
    }
    printf ("%d\n",cnt);
    for (long long i = 0; i < n; i++)
        if (b[a[i]] == 1)
        {
            cnt++;
            printf("%lld ", a[i]);
            b[a[i]] = 0;
        }
    return 0;
}
