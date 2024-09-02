#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest [i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char    *result;
    int total_len;
    int i;
    int sep_len;

    if (size == 0)
    {
        result = (char *)malloc(1);
        if (result)
            result [0] = '\0';
        return (result);
    }
    sep_len = ft_strlen(sep);
    total_len = 0;
    i = 0;
    while (i < size)
    {
        total_len += ft_strlen(strs[i]);
        if (i < size - 1)
            total_len += sep_len;
        i++;
    }
    result = (char *)malloc(total_len + 1);
    if (!result)
        return (NULL);
    result[0] = '\0';
    i = 0;
    while (i < size)
    {
        ft_strcat(result, strs[i]);
        if (i < size - 1)
            ft_strcat(result, sep);
        i++;
    }
    return (result);
}

#include <stdio.h>

int main(void) {
    char    *strs[] = {"Hello", "world"};
    char    *sep = " ";
    char    *result;

    result = ft_strjoin(2, strs, sep);
    if (result) {
        printf("%s\n", result);
        free(result);
    }
    result = ft_strjoin(0, strs, sep);
    if (result) {
        printf("Empty string: '%s'\n", result);
        free(result);
    }
    return 0;
}