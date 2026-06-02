#include <stdio.h>

int main(void)
{
    long long a, d, n;
    scanf("%lld %lld %lld", &a, &d, &n);
 
    printf("%lld\n", a + d * (n - 1));
    
    return 0;
}
