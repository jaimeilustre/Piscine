#include <stdlib.h>

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
        if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] == 127)
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

int char_in_base(char c, char *base)
{
    int i;

    i = 0;
    while(base[i] != '\0')
    {
        if (base[i] == c)
            return i;
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int base_len;
    int sign;
    int result;
    int i;

    sign = 1;
    result = 0;
    if(!check_valid_base(base))
        return (0);
    base_len = ft_strlen(base);
    while (*str == ' ' || (*str >= 9 && *str<= 13))
        str++;
    while (*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign *= -1;
        str++;
    }
    while ((i = char_in_base(*str, base)) != -1)
    {
        result = result * base_len + i;
        str++;
    }
    return (sign * result);
}

char *ft_itoa_base(int nbr, char *base)
{
    int base_len;
    int temp_nbr;
    int len;
    char *result;

    base_len = ft_strlen(base);
    len = 0;
    temp_nbr = nbr;
    if (nbr <= 0)
        len++;
    while (temp_nbr != 0)
    {
        temp_nbr = temp_nbr / base_len;
        len++;
    }
    result = (char *)malloc(len + 1);
    if (!result)
        return (NULL);
    result[len] = '\0';
    if (nbr < 0)
    {
        result [0] = '-';
        nbr = -nbr;
    }
    else if (nbr == 0)
        result[0] = base[0];
    while (nbr != 0)
    {
        len--;
        result[len] = base[nbr % base_len];
        nbr = nbr / base_len;
    }
    return (result);
}

char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int intermediate;
    char *result;

    if (!check_valid_base(base_from) || !check_valid_base(base_to))
        return (NULL);
    intermediate = ft_atoi_base(nbr, base_from);
    result = ft_itoa_base(intermediate, base_to);
    return (result);
}

#include <stdio.h>

int main(void)
{
    char    *str1 = "2A";
    char    *base1 = "0123456789ABCDEF";
    char    *base2 = "01";
    
    printf("%s\n", ft_convert_base(str1, base1, base2));
    free(ft_convert_base(str1, base1, base2));
}