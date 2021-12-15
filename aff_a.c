#include <unistd.h>

/* Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
 1, the program displays 'a' followed by a newline.
 */

int		main(int argc, char **argv)
{
	int i;

	i = 0;
    if (argc == 0)
    {
	    write(1, "a\n", 2);
    }
	else
    {
        while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	return (0);
}