/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:04:58 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/27 17:05:00 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	y = argc - 1;
	while (y > 0)
	{
		x = 0;
		while (argv[y][x])
		{
			write(1, &argv[y][x], 1);
			x++;
		}
		write(1, "\n", 1);
		y--;
	}
	return (0);
}