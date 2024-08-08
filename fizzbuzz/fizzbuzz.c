#include<unistd.h>
void   ft_putchar(char c)
{
    write (1, &c, 1);
}
void ft_putnumber(char nb)
{
    if (nb < 10)
        ft_putchar( nb + '0');
    else 
    {
        ft_putnumber(nb / 10);
        ft_putnumber(nb % 10);
    }

}
int main()
{
    int number;
    number = 1;
    while (number <= 100)
    {
        if ((number % 3 == 0) && (number % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if(number % 3 == 0)
            write (1, "fizz", 4);
        else if (number % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnumber(number);
        number++;
        write (1, "\n", 1);

    }
    return 0;
}