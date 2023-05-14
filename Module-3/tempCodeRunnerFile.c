#include<stdio.h>
int main()
{
    int i, a=0;
    for (i=0; i<10; i++)
    {
        a++;
        continue;
        
    }
    printf("%d %d", i,a);
    return 0;
}