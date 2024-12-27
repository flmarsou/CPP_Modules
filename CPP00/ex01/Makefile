# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/27 12:42:34 by flmarsou          #+#    #+#              #
#    Updated: 2024/12/27 12:52:55 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	phonebook

# Files
SRC			:=	main.cpp PhoneBook.cpp Contact.cpp

# Variables
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

# Makefile
all			:	${EXE}

${EXE}		:	${SRC}
				${CC} ${CFLAGS} ${SRC} -o ${EXE}

clean		:
				rm -rf ${EXE}

re			:	fclean all

.PHONY		:	all clean fclean re
