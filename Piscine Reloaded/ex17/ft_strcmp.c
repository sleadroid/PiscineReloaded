/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:58:44 by niko              #+#    #+#             */
/*   Updated: 2021/10/30 19:51:26 by nkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
**int main(void)
**{
**	assert(ft_strcmp("xy", "xy") == 0);
**	assert(ft_strcmp("xx", "yy") < 0);
**	assert(ft_strcmp("yy", "xx") > 0);
**	printf("%s\n", "OK!");
**	return (0);
**}
*/
