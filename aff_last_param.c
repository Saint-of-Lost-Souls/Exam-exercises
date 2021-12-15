#include <unistd.h>

/* Write a program that takes strings as arguments, and displays its last
argument followed by a newline.
If the number of arguments is less than 1, the program displays a newline. */

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 1)
	{
		argc--;
		while (argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}