/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:51:35 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 13:34:09 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') 
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
    char test1[] = "HelloWorld";
    char test2[] = "123ABC";
    printf("Test 1: %s -> %s\n", test1, ft_str_is_alpha(test1) ? "1" : "0");
    printf("Test 2: %s -> %s\n", test2, ft_str_is_alpha(test2) ? "1" : "0");
    return 0;
}
*/
