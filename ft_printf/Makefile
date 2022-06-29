# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjin <jjin@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/29 20:01:32 by jjin              #+#    #+#              #
#    Updated: 2022/06/29 20:08:57 by jjin             ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDES	= include
LIBFT		= libft
SRCS_DIR	= src/
OBJS_DIR	= obj/
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs
OBJS	= $(SRCS:.c=.o)


SRC_FILES	=	ft_printf ft_print_char ft_print_dec ft_print_hex ft_print_ptr\
				 ft_print_str ft_print_unsigned


SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

all:			$(NAME)

$(NAME):		$(OBJS) $(OBJS_DIR) $(INCLUDES)
				@make -C $(LIBFT)
				@cp libft/libft.a .
				@mv libft.a $(NAME)
				@$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJSF)
				@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
				@$(RM) -rf $(OBJS_DIR)
				@make clean -C $(LIBFT)

fclean:			clean
				@$(RM) -f $(NAME)
				@$(RM) -f $(LIBFT)/libft.a

re:				fclean all

.PHONY:			all clean fclean re