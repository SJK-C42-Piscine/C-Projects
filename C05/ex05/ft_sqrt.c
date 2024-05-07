/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:01:46 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/26 16:09:23 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb > 2147395600)
		return (0);
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}

/* #include <stdio.h>

int main() {
	int number = 25;
	int result = ft_sqrt(number);
	printf("Square root of %d is: %d\n", number, result);

	return 0;
} */