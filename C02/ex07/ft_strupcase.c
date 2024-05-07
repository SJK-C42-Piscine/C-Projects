/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:52:00 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 12:28:37 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z') 
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}

/* #include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Uppercase string: %s\n", ft_strupcase(str));
    return 0;
} */
