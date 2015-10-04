/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/04 08:48:31 by jlagneau          #+#    #+#             */
/*   Updated: 2015/10/04 08:48:32 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <libft.h>

void	print_stat_error(char *filename, int err)
{
	ft_putstr_fd("ft_ls: cannot access ", 2);
	ft_putstr_fd(filename, 2);
	ft_putstr_fd(": ", 2);
	ft_putendl_fd(strerror(err), 2);
}

void	print_error(int err)
{
	ft_putstr_fd("ft_ls: ", 2);
	ft_putendl_fd(strerror(err), 2);
	exit(1);
}
