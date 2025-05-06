/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanacop <hanacop@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:36:46 by hanacop           #+#    #+#             */
/*   Updated: 2025/04/30 16:40:01 by hanacop          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack a;
	int raw[3] = {3, 2, 1};
	// Because I'm not using arg yet
	(void)argc;
	(void)argv;

	a.arr = raw;
	a.size = 3;
	a.top = 2;

	printf("Original stack:\n");
	printf("[%d] [%d] [%d]\n", a.arr[0], a.arr[1], a.arr[2]);

	swap(&a);
	printf("After swap:\n");
	printf("[%d] [%d] [%d]\n", a.arr[0], a.arr[1], a.arr[2]);

	rotate(&a);
	printf("After rotate:\n");
	printf("[%d] [%d] [%d]\n", a.arr[0], a.arr[1], a.arr[2]);

	rev_rotate(&a);
	printf("After reverse rotate:\n");
	printf("[%d] [%d] [%d]\n", a.arr[0], a.arr[1], a.arr[2]);

	return (0);
}




