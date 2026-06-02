#include <stdio.h>

int main(void)
{
    long long n, sum = 0;
    int i = 1;
    
    scanf("%lld", &n);
    
    while (sum < n) 
    {
        sum += i;
        i++;
    }
    
    printf("%lld\n", sum);
    return 0;
}
