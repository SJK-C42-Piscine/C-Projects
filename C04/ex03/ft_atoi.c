/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:39:59 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/24 12:10:09 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	negative;

	number = 0;
	negative = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			negative++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	if (negative % 2)
		number = -number;
	return (number);
}

/* #include <stdio.h>
int main()
{
	char *str = "  ----010234----00044";
	int result = ft_atoi(str);
	printf("%d\n", result);
	return 0;
} */
