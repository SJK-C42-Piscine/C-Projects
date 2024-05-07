/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:29:11 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/14 19:41:39 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0') 
	{
		count++;
		str++;
	}
	return (count);
}

#include <stdio.h>
int main(void)
{
    char str[] = "abcdefghijklmnopqrstuvwxyzABCDEF";
    int length = ft_strlen(str);
printf("length is: %d\n", length);
    return (0);
}
