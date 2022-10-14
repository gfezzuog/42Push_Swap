/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:56:18 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/10/14 12:56:19 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;
	t_list	*second_last;

	first = *stack;
	second_last = *stack;
	while (second_last->next->next)
	{
	second_last = second_last->next;
	}
	last = second_last->next;
	second_last->next = NULL;
	last->next = first;
	*stack = last;
}

int	ft_rra(t_list **stack_a)
{
	if (*stack_a == NULL)
		return (1);
	ft_rrotate(stack_a);
	ft_printf("rra\n");
	return (0);
}

int	ft_rrb(t_list **stack_b)
{
	if (*stack_b == NULL)
		return (1);
	ft_rrotate(stack_b);
	ft_printf("rrb\n");
	return (0);
}

int	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL || *stack_b == NULL)
		return (1);
	ft_rrotate(stack_a);
	ft_rrotate(stack_b);
	ft_printf("rrr\n");
	return (0);
}
