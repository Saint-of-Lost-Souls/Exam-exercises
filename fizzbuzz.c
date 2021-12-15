#include <unistd.h>

void	ft_write_number(int num)
{
    char c;

	if (num >= 10)
    {
		ft_write_number(num / 10);
    }
    c = (num % 10) + '0';
	write(1, &c, 1);
}
int main()
{    
    int num = 1;
    
    while (num <= 100)
    {
        if (num % 3 == 0 && num % 5 == 0)
        {
            write(1, "fizzbuzz", 8);            
        }
        else if (num % 3 == 0)
        {
            write(1, "fizz", 4);            
        }
        else if (num % 5 == 0)
        {
            write(1, "buzz", 4);            
        }
        else{
            ft_write_number(num);
        }
        write(1, "\n", 1);
        num++;
    }
    return 0;
}