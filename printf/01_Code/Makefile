# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axlee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 10:45:30 by axlee             #+#    #+#              #
#    Updated: 2023/09/30 13:46:21 by axlee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

SRCP = ./
SRCS_PRINTF = ft_printf.c
SRCS = $(addprefix $(SRCP),$(SRCS_PRINTF))

OBJS = $(SRCS:.c=.o)

HEAD = libft

# **************************************************************************** #
#                                    LIBFT                                     #
# **************************************************************************** #

LIBFT_DIR = libft/
LIBFT = libft.a
LIBFT_AR = $(addprefix $(LIBFT_DIR), $(LIBFT))

# **************************************************************************** #
#                                  VARIABLES                                   #
# **************************************************************************** #

NAME		= libftprintf.a
AR			= ar rcs
RM			= rm -f
LIB			= ranlib
GCC			= gcc
CFLAGS 		= -Wall -Wextra -Werror

RESET		= \033[0m
BOLD		= \033[1m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m

# **************************************************************************** #
#                                   TARGETS                                    #
# **************************************************************************** #

all: $(NAME)

#$(OBJS): %.o: %.c

$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR)
	@mv $(LIBFT_AR) $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@$(LIB) $(NAME)
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: $(NAME)$(RESET)"

.c.o:
	$(GCC) $(CFLAGS) -c $< -o $@ 
	@if ! $(GCC) $(CFLAGS) -c $< -o $@ 2> error.txt; then \
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)"; \
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)"; \
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)"; \
		sed '$$d' error.txt; \
		echo "\n\n$(YELLOW)EXITING$(RESET)"; \
		exit 1; \
	fi


clean:
	@make fclean -C $(LIBFT_DIR)
	@$(RM) $(OBJS) error.txt
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Removed: $(words $(OBJS)) object file(s)$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)Removed: $(NAME)$(RESET)"

re: fclean all

.PHONY: all clean fclean re
