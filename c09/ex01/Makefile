CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
INCDIR = includes

SRCFILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJFILES = $(SRCFILES:.c=.o)
SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))
OBJS = $(addprefix $(SRCDIR)/, $(OBJFILES))

LIBNAME = libft.a

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	@echo "Creating library $(LIBNAME)"
	ar rc $(LIBNAME) $(OBJS)
	@echo "Indexing library"
	ranlib $(LIBNAME)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	@echo "Cleaning object files"
	rm -f $(OBJS)

fclean: clean
	@echo "Cleaning library $(LIBNAME)"
	rm -f $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re
