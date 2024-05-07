/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:08:54 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/26 16:12:15 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (i < 2)
		return (2);
	while (!ft_is_prime(i))
		i++;
	return (i);
}
/* 
#include <stdio.h>
int main()
{
int number = 20; // The number to test

printf("next_prime with number %d:\n", number);
printf("Next %d.\n", number, ft_find_next_prime(number));

return 0;
} */