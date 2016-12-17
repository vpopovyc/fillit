#include <stdio.h>

int main(void)
{
	int av[4];

	av[0] = 3;
	printf("av[0]: %d\n", av[0]);
	printf("av[1]: %d\n", ++av[1]);
	printf("Sum: %d\n", av[1] + av[0]);
	printf("av[0]: %d\n", av[0]);
	printf("av[1]: %d\n", av[1]);
	if (av[0] + av[1] + av[2] == 4)
		printf("ok\n");
	return (0);
}

