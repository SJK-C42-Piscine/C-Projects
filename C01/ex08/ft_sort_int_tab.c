/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:18:45 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/14 19:52:01 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

 #include <stdio.h>
int	main (void)
{
	int tab[] = {1, 5, 55, 4, 15};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Original array: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", tab[i]);
    }

	ft_sort_int_tab(tab, size);
	printf("Sorted array: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", tab[i]);
    }

	return (0);
}
