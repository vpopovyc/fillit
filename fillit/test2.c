#include <stdlib.h>
#include <stdio.h>

int		 main(void)
{
	char *n1;
	int i = 9;
	int j = 0;
	int k = 0;

	n1 = (char*)malloc(sizeof(char*) * 10);
	n1[j] = '\0';
	while(i)
	{
		n1[j] = i + 48;
		i--;
		j++;
	}
	free(n1);
	printf("%s\n", n1);
	n1 = (char*)malloc(sizeof(char*) * 5);

	n1[5] = '\0';
	while (k < 5)
	{
		n1[k] = k + 48;
		k++;
	}
	printf("%s\n", n1);
	return (0);
}