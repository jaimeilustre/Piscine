#include <stdio.h>

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
        if (base[i] == '-' || base[i] == '+' || base[i] <= 32)
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

int main(void)
{
    char    *str1 = "2A";
    char    *str2 = "101010";
    char    *str3 = "vn";
    char    *base1 = "0123456789ABCDEF";
    char    *base2 = "01";
    char    *base3 = "poneyvif";
    
    printf("%d\n", ft_atoi_base(str1, base1));
    printf("%d\n", ft_atoi_base(str2, base2));
    printf("%d\n", ft_atoi_base(str3, base3));
}