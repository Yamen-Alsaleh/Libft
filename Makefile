# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalsaleh <yalsaleh@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/14 14:20:11 by yalsaleh          #+#    #+#              #
#    Updated: 2025/12/14 14:42:51 by yalsaleh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC	:= cc
CFLAGS	:= -Wall -Wextra -Werror -I.
AR	:= ar rcs
RM	:= rm -f

#-----------------
#	FILES
#-----------------
SRCS	:= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd_back.c \
		ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
		ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJS	:= $(SRCS:.c=.o)

#----------------------------
#	colors for design ^_^
#----------------------------
BLUE	:= $$(printf "\033[34m")
GREEN	:= $$(printf "\033[32m")
YELLOW	:= $$(printf "\033[33m")
RED	:= $$(printf "\033[31m")
RESET	:= $$(printf "\033[0m")

#----------------------------
#	COMMANDS FOR MAKE
#----------------------------
.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@echo "$(GREEN)[OK]$(RESET) $(NAME) created"

%.o: %.c libft.h
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(BLUE)[CC]$(RESET) $<"

clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW)[OK]$(RESET) objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)[OK]$(RESET) $(NAME) removed"

re: fclean all

bonus: all
