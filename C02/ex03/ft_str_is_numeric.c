/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:51:40 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 11:43:52 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0); 
		}
		i++;
	}
	return (1); 
}
/*
#include <stdio.h>
int main() {
char test1[] = "123456";
char test2[] = "123ABC";
char test3[] = "abcd123";
char test4[] = "";
printf("Test 4: %s -> %s\n", test4, ft_str_is_numeric(test4) ? "True" : "False");
return 0;
} */
