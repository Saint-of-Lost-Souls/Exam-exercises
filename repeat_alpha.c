#include <unistd.h>

/* Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged. */
//If the number of arguments is not 1, just display a newline.
   
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
			  	count = argv[1][i] - 64;
            }
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
				count = argv[1][i] - 96;
            }
			while (count)
			{
				write(1, &argv[1][i], 1);
				count--;
			}
			count = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}