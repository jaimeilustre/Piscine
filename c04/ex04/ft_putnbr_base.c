#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int check_valid_base(char *base)
{
    int i;
    int j;
    int len;

    len = ft_strlen(base);
    if (len < 2)
        return (0);
    i = 0;
    while (i < len)
    {
        if (base[i] == '-' || base[i] == '+')
            return (0);
        j = i + 1;
        while (j < len)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

void    print_base(int nbr, char *base, int base_len)
{
    unsigned int    unbr;

    if (nbr < 0)
    {
        ft_putchar('-');
        unbr = -nbr;
    }
    else
    {
        unbr = nbr;
    }
    if (unbr >= (unsigned int)base_len)
        print_base(unbr / base_len, base, base_len);
    ft_putchar(base[unbr % base_len]);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int base_len;

    if (!check_valid_base(base))
        return;
    base_len = ft_strlen(base);
    print_base(nbr, base, base_len);
}

int main(void)
{
    int nbr = 42;
    char    *base1 = "0123456789ABCDEF";
    char    *base2 = "01";
    char    *base3 = "poneyvif";

    ft_putnbr_base(nbr, base1);
    ft_putchar('\n');
    ft_putnbr_base(nbr, base2);
    ft_putchar('\n');
    ft_putnbr_base(nbr, base3);
    ft_putchar('\n');
    return (0);
}
