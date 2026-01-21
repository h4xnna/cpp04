NAME = main
CC = c++ -std=c++98 
FLAGS = -Wall -Wextra -Werror

SRCS =  main.cpp  AMateria.cpp Ice.cpp Cure.cpp Character.cpp 
$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o main
all : $(NAME)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all