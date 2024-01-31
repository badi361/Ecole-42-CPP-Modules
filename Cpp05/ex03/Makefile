SRCS	=	main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	result

CC		=	c++

CPPFLAGS=	-std=c++98 -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) $(CPPFLAGS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
					$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
