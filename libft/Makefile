# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/20 22:53:09 by melaouad          #+#    #+#              #
#    Updated: 2021/11/05 15:29:14 by melaouad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
		 ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c\
		 ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c\
		 ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c\
		 ft_calloc.c ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c\
		 ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		 ft_putnbr_fd.c ft_strcmp.c
SOURCES_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
		 ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c\
		 ft_lstmap_bonus.c

OBJECT = $(SOURCES:.c=.o)

OBJECT_B = $(SOURCES_B:.c=.o)

all : $(NAME)

$(NAME): $(OBJECT)
	ar rcs $(NAME) $(OBJECT)

bonus: $(OBJECT_B)
	ar rcs $(NAME) $(OBJECT_B)

clean:
	rm -rf $(OBJECT) $(OBJECT_B)

%.o : %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

fclean: clean
	rm -rf $(NAME)

re: fclean all
