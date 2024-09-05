CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
INCDIR = includes
NAME = bsq

SRCFILES = main.c buffer.c check_map.c print_map.c read_file.c solver.c solver2.c standard_input.c
OBJFILES = $(SRCFILES:.c=.o)

SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))
OBJS = $(addprefix $(SRCDIR)/, $(OBJFILES))

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/bsq.h
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

$(NAME): $(OBJS)
	@echo "Linking $(NAME)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	@echo "Cleaning object files"
	rm -f $(OBJS)

fclean: clean
	@echo "Cleaning executable $(NAME)"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
