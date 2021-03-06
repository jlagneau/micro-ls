/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlagneau <jlagneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/04 08:48:45 by jlagneau          #+#    #+#             */
/*   Updated: 2015/10/04 08:48:46 by jlagneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "ft_ls.h"

void		free_file(void *file, t_size size)
{
	t_file	*f;

	f = file;
	if (f->name)
		ft_strdel(&(f->name));
	if (f->link_dest)
		ft_strdel(&(f->link_dest));
	ft_memdel((void**)&(f->stat));
	(void)size;
}
