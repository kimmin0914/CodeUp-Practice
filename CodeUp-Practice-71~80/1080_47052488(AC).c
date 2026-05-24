#include <stdio.h>
int main(void)
{
	int num;
	int sum = 0;
	int i;
	scanf("%d", &num);
	
	for(i = 0; num > sum;)
	{	
		i++;
		sum += i;
	}
	printf("%d\n", i);
	
	return 0;
}
