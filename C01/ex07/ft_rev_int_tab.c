/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:13:08 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/14 19:43:21 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

#include <stdio.h> 
 int main(void) 
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Original array: ");

    for (int i = 0; i < size; i++) 
	{
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", tab[i]);
    }

    return (0);
} 