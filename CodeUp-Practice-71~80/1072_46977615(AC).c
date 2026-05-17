#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d", &a);
	reload:
	scanf("%d", &b);
	
	if (a-- != 0)
	{
		printf("%d\n", b);
		goto reload;
	}
	return 0;
}
