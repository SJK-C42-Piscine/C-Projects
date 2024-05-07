/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrzyzak <skrzyzak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:22:30 by skrzyzak          #+#    #+#             */
/*   Updated: 2024/03/14 19:37:45 by skrzyzak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}

int main (void)
{
	int c;
	int d;

	c =20;
	d = 4;

	printf("NUMBER A is %d\n", c);
	printf("NUMBER A is %d\n", d);

	ft_ultimate_div_mod(&c, &d);

	printf("NUMBER A is %d\n", c);
	printf("NUMBER A is %d\n", d);

}
