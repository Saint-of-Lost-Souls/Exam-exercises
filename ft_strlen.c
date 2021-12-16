#include <unistd.h>

int    ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
    {
        count++;
    }
    return (count);
}
#include <stdio.h>

int main()
{
    int result;

    result = ft_strlen("Banana");
    printf("The length of the str is: %d\n", result);
    return 0;
}