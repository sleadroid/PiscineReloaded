/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:42:14 by niko              #+#    #+#             */
/*   Updated: 2021/10/30 19:51:31 by nkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
**int		main(void)
**{
**	char *str;
**
**	str = "This has 23 characters!";
**	printf("Should return 23. Result: %d\n", ft_strlen(str));
**}
*/
