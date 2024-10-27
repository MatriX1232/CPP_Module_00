CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = phonebook

FILES = \
	main.cpp \
	PhoneBook.cpp \
	PhoneBook_utils.cpp

OBJS = ${FILES:.cpp=.o}


%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
