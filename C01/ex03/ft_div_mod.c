/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:14:22 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/14 19:34:45 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>
int main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 2;

	ft_div_mod(a, b, &div, &mod);

	printf("This is my div: %d\n", div);
	printf("This is my mod: %d\n", mod);

	return (0);
} 
