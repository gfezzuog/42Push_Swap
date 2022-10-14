/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stuff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:55:43 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/10/14 12:55:45 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	free_stuff(t_list *node, char **matrix)
{
	int	i;

	i = 0;
	if (node != NULL)
	{
		free(node);
		node = NULL;
	}
	if (matrix != NULL)
	{
		while (matrix[i])
		{
			free(matrix[i++]);
		}
		free(matrix);
		matrix = NULL;
	}
	return (0);
}

void	ft_lst_delete(t_list **stack)
{
	t_list	*tmp;

	if (*stack == NULL)
		return ;
	tmp = *stack;
	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		free (*stack);
		*stack = tmp;
	}
}
