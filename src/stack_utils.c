/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:29 by hanacop           #+#    #+#             */
/*   Updated: 2025/05/06 18:19:34 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *s)
{
	int	temp_top;

	if (s->top < 1)
		return ;
	temp_top = s->arr[s->top];
	s->arr[s->top] = s->arr[s->top - 1];
	s->arr[s->top - 1] = temp_top;
}

void	push(t_stack *from, t_stack *to)
{
	if (from->top < 0)
		return ;
	to->top++;
	to->arr[to->top] = from->arr[from->top];
	from->top--;
}

void	rotate(t_stack *s)
{
	int	temp_top;
	int	i;

	if (s->top < 1)
		return ;
	temp_top = s->arr[s->top];
	i = s->top;
	while (i > 0)
	{
		s->arr[i] = s->arr[i - 1];
		i--;
	}
	s->arr[0] = temp_top;
}

void	rev_rotate(t_stack *s)
{
	int	temp_bottom;
	int	i;

	if (s->top < 1)
		return ;
	temp_bottom = s->arr[0];
	i = 0;
	while (i < s->top)
	{
		s->arr[i] = s->arr[i + 1];
		i++;
	}
	s->arr[s->top] = temp_bottom;
}


