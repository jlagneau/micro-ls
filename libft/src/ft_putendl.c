/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 08:37:37 by jlagneau          #+#    #+#             */
/*   Updated: 2013/11/21 08:37:41 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_io.h>

void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}
