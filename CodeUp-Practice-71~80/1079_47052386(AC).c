#include <stdio.h>
int main(void)
{
	char a;
	
	while(1)
	{
		scanf("%c", &a);
		if (a == 'q')
		{
			printf("%c", a);
			break;
		}
		else
		{
			printf("%c", a);
		}
	}
	return 0;
}
