/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:52:04 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 12:38:26 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr += 32;
		}
		ptr++;
	}
	return (str);
}
/* 
#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Lowercase string: %s\n", ft_strlowcase(str));
    return 0;
}
*/
