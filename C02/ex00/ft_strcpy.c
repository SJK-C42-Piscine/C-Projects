/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:51:19 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 11:20:20 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, const char *src)
{
	char	*temp;

	temp = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
/* #include <stdio.h>
int main() {
	char src[] = "Hello, World!";
	char dest[20];
	
	ft_strcpy(dest, src);
	
	printf("Copied string: %s\n", dest);
	
	return 0;
} */
