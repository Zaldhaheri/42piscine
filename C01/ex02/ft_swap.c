/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:24:00 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/13 19:46:00 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 0;
// 	y = 1;
// 	ft_swap(&x, &y);
// 	printf("%d", x);
// 	printf("%d", y);
// 	return (0);
// }
