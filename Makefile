#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME     := push_swap
CC       := gcc
USER     := jvalle-d
FLAGS    := -Wall -Wextra -Werror 
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      ft_atoll.c \
                          ft_checkdoublesorder.c \
                          ft_cost.c \
                          ft_findtarget.c \
                          ft_firstmove.c \
                          ft_free_stack.c \
                          ft_index.c \
                          ft_moves.c \
                          ft_perform_moves.c \
                          ft_perform_moves2.c \
                          ft_print_error.c \
                          ft_print_moves.c \
                          ft_print_moves2.c \
                          ft_push.c \
                          ft_setpos.c \
                          ft_sort_three.c \
                          ft_split.c \
                          ft_strlen.c \
                          ft_substr.c \
                          push_swap.c \
                          ft_lstaddback.c \
                          ft_lstnew.c \
                          ft_lstsize.c \
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


