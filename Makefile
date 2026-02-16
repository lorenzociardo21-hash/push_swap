# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lciardo <lciardo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/12 17:31:43 by lciardo           #+#    #+#              #
#    Updated: 2026/02/16 12:46:19 by lciardo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

# Compilatore e Flag
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -I.

# Sorgenti divisi per cartella per chiarezza
SRC_MAIN	=	main.c
SRC_CODING	=	coding/matrix.c coding/100plus.c
SRC_COMANDI	=	comandi/push.c comandi/reverserotate.c comandi/rotate.c comandi/swap.c
SRC_LIBFT	=	libft/ft_atoi.c libft/ft_list.c libft/ft_lstsize.c libft/ft_split.c \
				libft/ft_strlen.c libft/ft_substr.c libft/listaddfront.c libft/ft_listclear.c \
				libft/listdelone.c
SRC_PARSING	=	parsing/control_argv.c parsing/putinstack.c
SRC_INDEX	=	index/index.c

# Unione di tutti i file sorgente
SRCS		=	$(SRC_MAIN) $(SRC_CODING) $(SRC_COMANDI) $(SRC_LIBFT) $(SRC_PARSING) $(SRC_INDEX)

# Trasformazione dei file .c in .o
OBJS		=	$(SRCS:.c=.o)

# Regola principale
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Pulizia oggetti
clean:
	rm -f $(OBJS)

# Pulizia totale
fclean: clean
	rm -f $(NAME)

# Ricompilazione totale
re: fclean all

.PHONY: all clean fclean re