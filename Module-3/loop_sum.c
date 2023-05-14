#include<stdio.h>
int main()
{
    long long int i, n;
    long long int sum = 0;
    scanf("%lld", &n);
    for(i=0; i<=n; i++)
    {
        sum= sum + i;
    }
    printf("%lld", sum);
    return 0;
}