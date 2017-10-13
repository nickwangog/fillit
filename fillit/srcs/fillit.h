#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include <stdio.h>

# define ROW_SIZE 4

typedef struct		m_list
{
	int				*ind;
	int				*offset;
	int				label;
	struct s_list	*prev;
	struct s_list	*next;
}					l_list;

int				valid(char *argv);
int				ft_mod(int a, int b);

#endif