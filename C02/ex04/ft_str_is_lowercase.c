/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:51:46 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 11:51:45 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
char test3[] = "abcdedfff";
char test4[] = "";
printf(test4, ft_str_is_lowercase(test4) ? "True" : "False");
return 0;
}
*/
