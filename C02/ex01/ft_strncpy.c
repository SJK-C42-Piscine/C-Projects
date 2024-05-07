/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:51:29 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 11:24:18 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0') 
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n) 
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
