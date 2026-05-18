#include <stdio.h>

int main(void)
{
    char c, i = 'a';
    scanf("%c", &c);
    
    do {
        printf("%c ", i);
        i++;
    } while (i <= c);
    
    return 0;
}
