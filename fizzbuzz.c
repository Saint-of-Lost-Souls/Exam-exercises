#include <unistd.h>


int ft_write_number_1(int num)
{
        int i;

        if (num > 10)
        {
            ft_write_number_1(num / 10);
        }
        i = (num / 10) + '0';
        return (i);
}
int	ft_write_number_2(int num)
{
    int i;

    if (num >= 10)
    {
		ft_write_number_2(num / 10);
    }
    
    i = (num % 10) + '0';
    return (i);
}
int ft_single_digit(int num)
{
    if (num == 1)
    {
        write(1, "1", 1);
    }
    if (num == 2)
    {
        write(1, "2", 1);
    }
    if (num == 3)
    {
        write(1, "3", 1);
    }
    if (num == 5)
    {
        write(1, "5", 1);
    }
    if (num == 6)
    {
        write(1, "6", 1);
    }
    if (num == 9)
    {
        write(1, "9", 1);
    }
    return (num);
}
int main()
{    
    int num = 1;
    
    while (num <= 100)
    {
        if (num % 4 == 0 && num % 7 == 0)
        {
            write(1, "fizzbuzz", 8);            
        }
        else if (num % 4 == 0)
        {
            write(1, "fizz", 4);            
        }
        else if (num % 7 == 0)
        {
            write(1, "buzz", 4);            
        }
        else if(num <= 9)
        {
            ft_single_digit(num);
            write(1, &num, 1);
        }
        else{
            ft_write_number_1(num);
            write(1, &num, 1);       
            ft_write_number_2(num);
            write(1, &num, 1);
        }
        write(1, "\n", 1);
        num++;
    }
    return 0;
}