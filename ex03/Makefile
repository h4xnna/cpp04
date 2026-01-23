NAME = main
CC = c++ -std=c++98 -g3
FLAGS = -Wall -Wextra -Werror

SRCS =  main.cpp  AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o main
all : $(NAME)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all