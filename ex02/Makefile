NAME = Animal
CC = c++ -std=c++98 
FLAGS = -Wall -Wextra -Werror

SRCS =  main.cpp  Cat.cpp Dog.cpp Animal.cpp Brain.cpp 
$(NAME) : $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o main
all : $(NAME)
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all