/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:51:51 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 11:56:43 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0); 
		}
		i++;
	}
	return (1); 
}
/* 
#include <stdio.h>
int main()
{
char test1[] = "HELLOWORLD";
char test2[] = "123ABC";
char test3[] = "abcdedfff";
char test4[] = "";

printf("Test 4: %s -> %s\n", test4, ft_str_is_uppercase(test4) ? "1" : "0");


    return 0;
} */
