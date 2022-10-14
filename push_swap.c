/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:56:26 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/10/14 12:56:27 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*array;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2 || upload_list(argc, argv, &stack_a) == 1)
	{
		return (ft_printf("Error\n"));
	}
	if (ft_identity_test(&stack_a) == 1)
		return (1);
	array = to_array(&stack_a, 0, ft_lstsize(stack_a));
	ft_sort(&stack_a, &stack_b, array);
	ft_lst_delete(&stack_b);
	ft_lst_delete(&stack_a);
	free(array);
	return (0);
}
