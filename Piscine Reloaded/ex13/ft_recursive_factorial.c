/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:29:35 by niko              #+#    #+#             */
/*   Updated: 2021/10/30 19:51:38 by nkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (1);
}

/*
**int		main(void)
**{
**	int num;
**
**	num = 0;
**	printf("\n(╯°□°)╯ Enter an integer to check its factorial: ");
**	scanf("%d", &num);
**	printf("\nWOW! Factorial of %d is %d!\n", num, ft_recursive_factorial(num));
**	return (0);
**}
*/
