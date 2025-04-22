# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 13:45:33 by flmarsou          #+#    #+#              #
#    Updated: 2025/04/22 14:04:43 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	PmergeMe

# Files
SRC			:=	main.cpp \
				PmergeMe.cpp \

# Variables
CC			:=	c++
CFLAGS		:=	-Wall -Wextra -std=c++98

# Makefile
all			:	${EXE}

${EXE}		:	${SRC}
				${CC} ${CFLAGS} ${SRC} -o ${EXE}

clean		:
				rm -rf ${EXE}

re			:	clean all

.PHONY		:	all clean re
