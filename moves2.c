/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:56:14 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/10/14 12:56:15 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b == NULL)
		return (1);
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	ft_printf("pa\n");
	return (0);
}

void	ft_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	tmp2 = *stack;
	*stack = (*stack)->next;
	while (tmp2->next)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp;
	tmp->next = NULL;
}

int	ft_ra(t_list **stack_a)
{
	if (*stack_a == NULL)
		return (1);
	ft_rotate(stack_a);
	ft_printf("ra\n");
	return (0);
}

int	ft_rb(t_list **stack_b)
{
	if (*stack_b == NULL)
		return (1);
	ft_rotate(stack_b);
	ft_printf("rb\n");
	return (0);
}

int	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a == NULL || *stack_b == NULL)
		return (1);
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("rr\n");
	return (0);
}
