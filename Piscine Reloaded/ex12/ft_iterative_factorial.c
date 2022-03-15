/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:46:38 by niko              #+#    #+#             */
/*   Updated: 2021/10/30 19:51:40 by nkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb != 0)
	{
		result *= nb;
		nb --;
	}
	return (result);
}

/*
**int	main(void)
**{
**	printf("%d", ft_iterative_factorial(10));
**	return (0);
**}
*/
