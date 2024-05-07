/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:55:13 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/24 11:50:17 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char dest[] = "Hello, ";
	const char src[] = "world!";
	unsigned int n = -10;

	printf("Before ft_strncat: %s\n", dest);
	ft_strncat(dest, (char *)src, n);
	printf("After ft_strncat: %s\n", dest);
	printf("%d\n", n);
	return (0);
} */
