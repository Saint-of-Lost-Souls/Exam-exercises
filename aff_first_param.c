#include <unistd.h>

/* Write a program that takes strings as arguments, and displays its first
argument followed by a \n.
If the number of arguments is less than 1, the program displays \n.
 */

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 0)
	{
		write(1, "/n", 1);
	}
	else
    {        
		while (argv[1][i])
        {
			write(1, &argv[1][i], 1);
			i++;
        }
	}
	write(1, "\n", 1);
	return (0);
}