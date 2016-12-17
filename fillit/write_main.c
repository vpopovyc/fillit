
#include "ft_header.h"

int		main(void)
{
	char	map[] = "....\n....\n....\n....\n";
	char	bs1[] = "....\n.BB.\nBB..\n....\n*";
	char	bs[] = "...A\n...A\n...A\n...A\n*";
	int 	n;                               //Size of map
	int		i;                               //Starting point on map
	int		c;                               //Indicates if write is possible
	

	printf("%s\n", map);
//	printf("%s\n", bs);
	printf("%s\n", bs1);

//	n = 4;  i = 0;                      //Controls 
//	c = ft_check_place(map, bs, n, i);  // bs
	/*
	if (c == 1)
	{
		printf ("ft_write can write that block on map, with this params, ofc!\n");
		ft_write(map, bs, n, i);
		printf("Map right now:\n%s\n", map);
	}
	else
		printf ("ft_write can not write that block on map\n");
  */  
    n = 4;  i = 1;                        //Controls
    c = ft_check_place(map, bs1, n, i);   // bs1
	
	if (c == 1)
	{
		printf ("ft_write can write that block on map, with this params, ofc!\n");
		ft_write(map, bs1, n, i);
		printf("Map right now:\n%s\n", map);
	}
	else
		printf ("ft_write can not write that block on map\n");

	
	
}