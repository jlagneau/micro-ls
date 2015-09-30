/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 18:36:55 by jlagneau          #+#    #+#             */
/*   Updated: 2013/12/02 19:20:59 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_str.h>
#include <stdlib.h>

void	ft_stradel(char ***a)
{
	t_size	i;

	if (!*a)
		return ;
	i = 0;
	while (*a[i] != 0)
	{
		ft_strdel(&(*a[i]));
		i++;
	}
	free(*a);
	*a = 0;
}
