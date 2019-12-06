# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roster <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 11:28:35 by roster            #+#    #+#              #
#    Updated: 2019/12/06 17:49:30 by lojesu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_LIBFT = ft_atoi.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnew.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_strsplit_list.c \
			ft_lstreverse.c \
			ft_print_list.c \
			ft_lstcount.c \
			ft_swap.c \
			ft_strjoin_free.c \
			ft_tabdel.c \
			ft_tabdel_char.c \
			ft_strchr_count.c \
			ft_strnchr_count.c \
			ft_nb_size.c \
			ft_isnumber.c

SRCS_PRINTF = ft_accuracy.c \
			ft_dispatcher.c \
			ft_csp.c \
			ft_diouxx.c \
			ft_float.c \
			ft_hashtag.c \
			ft_hash_oxx.c \
			ft_itoa_printf.c \
			ft_lh_flags.c \
			ft_minus_flag.c \
			ft_number_flag.c \
			ft_parse_flag.c \
			ft_percent.c \
			ft_plus_flag.c \
			ft_printf.c \
			ft_space_flag.c \
			ft_binary_flag.c \
			ft_realloc.c \
			ft_add_str.c \
			ft_mul_str.c \
			ft_power_str.c \
			ft_str_binary_to_nb.c \
			ft_str_mantisse_to_nb.c \
			ft_dtoa.c \
			ft_ldtoa.c \
			ft_putstr_printf.c

			#get_next_line.c \#

SRCS = $(SRCS_LIBFT) \
	   $(SRCS_PRINTF)

OBJ	= $(SRCS:.c=.o)
INCDIR	= ./incs/
SRCDIR	= ./srcs/
OBJDIR	= objs/
FLAGS	= -Wall -Wextra -Werror
CC		= gcc

INCLUDES	= $(foreach include, $(INCDIR), -I$(include))
COBJ		= $(addprefix $(OBJDIR), $(OBJ))
CSRC		= $(addprefix $(SRCDIR), $(SRCS))

RESET		= \033[0m
GREEN		= \033[32m
YELLOW		= \033[33m
RED			= \033[31m
PURPLE		= \033[35m

all: $(NAME)

$(NAME): $(OBJDIR) $(COBJ)
	@echo "$(PURPLE)\n\t - Building $(RESET)$(NAME)\n"
	@ar rc $(NAME) $(COBJ)
	@ranlib $(NAME)
	@echo "$(GREEN)***\t$(NAME) Successfully created\t***\n$(RESET)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "$(YELLOW)\t - Compiling :$(RESET)" $<
	@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@


clean:
	@echo "$(RED)***\tDeleting all object from $(NAME)\t***\n$(RESET)"
	@rm -rf $(COBJ)

fclean: clean
	@echo "$(RED)***\tDeleting executable file from $(NAME)\t***\n$(RESET)"
	@rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re
