#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include "libft.h"


typedef struct s_stack
{
	int *arr;
	int size;
	int top;
}	t_stack;

// parser.c
int		is_valid_input(char *s);
int		check_duplicates(int *arr, int size);
void	print_error(void);

// stack_utils.c
void	swap(t_stack *s);
void	push(t_stack *from, t_stack *to);
void	rotate(t_stack *s);
void	rev_rotate(t_stack *s);

#endif
