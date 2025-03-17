# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 12:23:54 by flmarsou          #+#    #+#              #
#    Updated: 2025/03/17 14:48:11 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	a.out

# Files
SRC			:=	main.cpp \
				AAnimal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp \

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
