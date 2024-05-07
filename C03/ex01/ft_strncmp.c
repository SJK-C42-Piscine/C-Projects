/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:34:44 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/21 15:44:46 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
/* #include <stdio.h>
#include <string.h>
int main()
{
	unsigned int n = 4;
	char *s1 = "abcde";
	char *s2 = "bcdef";
	printf("%d\n", ft_strncmp(s1, s2, n));
	return 0;
} */