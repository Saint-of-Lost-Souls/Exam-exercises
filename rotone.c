#include <unistd.h>

int		main(int ac, char **av)
{
	int i;
	char tmp;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y') ||	(arg[1][i] >= 'a' && argv[1][i] <= 'y'))
			{
				tmp = argv[1][i] + 1;
				write(1, &tmp, 1);
			}
			else if (argv[1][i] == 'Z' || argv[1][i] == 'z')
            {
				(argv[1][i] == 'Z') ? write(1, "A", 1) : write(1, "a", 1);
            }
			else
            {
				write(1, &argv[1][i], 1);
            }
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}