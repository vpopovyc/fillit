
#include "libft.h"
#include <stdio.h>

char	*ft_map(int n)
{
	int		i;
	int		c;
	int 	j;
	char	*map;

	i = (n * n) + n;
	if ((map = (char*)ft_memalloc(i)) == 0)
		ft_putstr("Malloc daun!\n");
	c = 0;
	j = 0;
	while (--i)
	{
		map[j] = '.';
		if (c == n)
		{

			map[j] = '\n';
			c = -1;
		}
		c++;
		j++;
	}
	return (map);
}

void	ft_buf(int n)
{
	char *beer; 

	beer = ft_map(n);
	printf("%s\n", beer);
}

int		main(void)
{
	ft_buf(10);
	ft_buf(6);
	return (0);
}