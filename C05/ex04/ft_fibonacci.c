/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:01:51 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/26 16:00:55 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	val;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
	{
		val = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (val);
	}
}

/* #include<stdio.h>
int main ()
{
	int num = 8;
	printf("%d\n",ft_fibonacci(num));
	return 0;
} */