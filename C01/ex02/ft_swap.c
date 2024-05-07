/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:21:21 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/14 19:33:13 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

 #include <stdio.h>

 int	main(void)
{
	int	x;
	int	y;

	x = 0;
	y = 22;

	printf("This is before swap: %d\n", x);
	printf("This is before swap: %d\n", y);

	ft_swap(&x , &y);

	printf("This is after swap: %d\n", x);
	printf("This is after swap: %d\n", y);

return (0);
} 
