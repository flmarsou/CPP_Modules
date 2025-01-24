# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/23 14:47:15 by flmarsou          #+#    #+#              #
#    Updated: 2025/01/24 12:22:54 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	fragtrap

# Files
SRC			:=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

# Variables
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98

# Makefile
all			:	${EXE}

${EXE}		:	${SRC}
				${CC} ${CFLAGS} ${SRC} -o ${EXE}

clean		:
				rm -rf ${EXE}

re			:	clean all

.PHONY		:	all clean re
