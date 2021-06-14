#main makefile
SRCS = main_split.c

CC = gcc

C_FLAGS =	-Wall -Werror -Wextra -lbsd

LIB_DIR = libft
#-L(where to find library files) -I(where to find header files) -lft(libft being
#used)
LIBFT_FLAGS = -L./${LIB_DIR} -I/${LIB_DIR} -lft

#.c --> .o
OBJ	= ${SRCS:%.c=%.o}

all: clean
#-static (link using static librarys)
${OBJ} :
		@cd ./libft; make; make clean
		@${CC} -static ${SRCS} ${LIBFT_FLAGS} ${C_FLAGS}

run : ${OBJ}
		@./a.out
clean : run
		@rm -f *.out
