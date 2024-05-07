/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:55:57 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/14 19:39:05 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0') 
	{
		write(1, str, 1);
		str++;
	}
}

 int main(void)
{
    char str[] = "abcdefghijklmnopqrstuvwxyzABCDEF";
    ft_putstr(str);
} 
