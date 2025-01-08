# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 12:31:14 by flmarsou          #+#    #+#              #
#    Updated: 2025/01/08 14:34:51 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE			:=	sed

# Files
SRC			:=	main.cpp checkArgs.cpp inFile.cpp

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
