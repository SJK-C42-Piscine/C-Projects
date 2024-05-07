/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:56:08 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/24 12:04:44 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* #include <stdio.h> 
int main()
{
    char *test_string1 = "Hello, world!";
    char *test_string2 = "This is a test.";
    char *test_string3 = NULL; // Test with NULL pointer

    // Call ft_putstr with test strings
    ft_putstr(test_string1);
    write(1, "\n", 1); 
    ft_putstr(test_string2);
    write(1, "\n", 1);
    if (test_string3 != NULL) 
        ft_putstr(test_string3); // Test with NULL pointer

    return 0;
} */