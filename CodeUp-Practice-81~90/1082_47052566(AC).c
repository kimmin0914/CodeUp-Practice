#include <stdio.h>
int main(void)
{
	int a;
	scanf("%x", &a);
	
	for(int i = 1; i <= 15; i++)
	{
		printf("%X*%X=%X\n", a, i, a * i);
	}
	return 0;
}
