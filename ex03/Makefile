NAME    = Materia
OS		= $(shell uname)

# directories
SRCDIR        =    ./src
INCDIR        =    ./includes
OBJDIR        =    ./obj

HEADER		=	AMateria.hpp\
				Cure.hpp\
				Ice.hpp\
				ICharacter.hpp\
				Character.hpp\
				IMateriaSource.hpp\
				MateriaSource.hpp

# src / obj files
SRC        =	main.cpp\
				AMateria.cpp\
				Character.cpp\
				Cure.cpp\
				Ice.cpp\
				MateriaSource.cpp
				

OBJ        = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

# compiler
CC        = c++
CFLAGS    = -Wall -Wextra -Werror -std=c++98 -g3 #-fsanitize=address


all:	obj $(NAME)

obj:	
		mkdir -p $(OBJDIR)


$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp	${INCDIR}
				$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<


$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -lm -o $(NAME)

clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -rf $(NAME)

re:		fclean
		make all