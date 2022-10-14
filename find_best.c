/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:55:39 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/10/14 12:55:40 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_the_highest(t_list **stack_a, int content)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->content > content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_is_the_lowest(t_list **stack_a, int content)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->content < content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_handle_lowest_highest(t_list	**stack_a, int b_content, int size_a)
{
	int		counter;
	t_list	*tmpa;

	tmpa = *stack_a;
	counter = 0;
	while (ft_identity_test(&tmpa) == 0)
	{
		counter++;
		tmpa = tmpa->next;
	}
	if (counter > (size_a / 2 + size_a % 2))
		return (counter - size_a);
	else
		return (counter);
}

int	ft_find_best(t_list	**stack_a, t_list	**stack_b)
{
	t_list	*tmpb;
	int		best_moves;
	int		best_number;
	int		t_moves;

	best_moves = 99999;
	tmpb = *stack_b;
	while (tmpb)
	{
		t_moves = ft_calculate_moves(stack_a, stack_b, tmpb->content);
		if (t_moves < best_moves)
		{
			best_moves = t_moves;
			best_number = tmpb->content;
		}
		tmpb = tmpb->next;
	}
	return (best_number);
}
