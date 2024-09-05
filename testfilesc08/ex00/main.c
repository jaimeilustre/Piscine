#include <stdio.h> 
#include <unistd.h>
#include "ft.h" 

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int ft_strlen(char *str)
{
    int length = 0;
    while (*str)
    {
        length++;
        str++;
    }
    return length;
}

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

int main(void)
{
    printf("Testing ft_putchar:\n");
    ft_putchar('H');
    ft_putchar('i');
    ft_putchar('\n');

    printf("\nTesting ft_swap:\n");
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    printf("\nTesting ft_putstr:\n");
    ft_putstr("Hello, World!\n");

    printf("\nTesting ft_strlen:\n");
    char str[] = "Hello, World!";
    printf("Length of '%s': %d\n", str, ft_strlen(str));

    printf("\nTesting ft_strcmp:\n");
    char s1[] = "Hello";
    char s2[] = "Hello";
    char s3[] = "World";
    printf("Comparing '%s' and '%s': %d\n", s1, s2, ft_strcmp(s1, s2)); 
    printf("Comparing '%s' and '%s': %d\n", s1, s3, ft_strcmp(s1, s3)); 
    printf("Comparing '%s' and '%s': %d\n", s3, s1, ft_strcmp(s3, s1)); 
    return (0);
}
