/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:55:58 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/10/14 12:55:59 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_simple_moves(t_list **stack_a, t_list **stack_b, int n_a, int n_b)
{
	while (n_a > 0)
	{
		ft_ra(stack_a);
		n_a--;
	}
	while (n_a < 0)
	{
		ft_rra(stack_a);
		n_a++;
	}
	while (n_b > 0)
	{
		ft_rb(stack_b);
		n_b--;
	}
	while (n_b < 0)
	{
		ft_rrb(stack_b);
		n_b++;
	}
}

void	ft_double_rotate(t_list **stack_a, t_list **stack_b, int n_a, int n_b)
{
	if (n_a < 0)
	{
		while (n_a < 0 || n_b < 0)
		{
			ft_rrr(stack_a, stack_b);
			n_a++;
			n_b++;
		}
	}
	else
	{
		while (n_a > 0 || n_b > 0)
		{
			ft_rr(stack_a, stack_b);
			n_a--;
			n_b--;
		}
	}
	ft_simple_moves(stack_a, stack_b, n_a, n_b);
}
