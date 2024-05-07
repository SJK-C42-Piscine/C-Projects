/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:51:56 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/18 11:58:58 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			return (0); 
		}
		i++;
	}
	return (1); 
}
/* #include <stdio.h>
int main() {
    // Test strings
    char test1[] = "HelloWorld";
    char test2[] = "123ABC";
    char test3[] = "abcdedfff    ";
    char test4[] = "";
printf("Test 4: %s -> %s\n", test4, ft_str_is_printable(test4) ? "1" : "0");

    return 0;
} */
