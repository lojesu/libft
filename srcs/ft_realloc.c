/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roster <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 16:44:21 by roster            #+#    #+#             */
/*   Updated: 2019/12/06 14:43:23 by lojesu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"
#include "libft.h"

/*
** The mod permit to alloc size byte supp before *s if mod == 1
** or after *s if the mod == 0
** it is use for example to string addition
*/

char	*ft_realloc(char *s, size_t size, size_t mod)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (!(tmp = ft_strnew(ft_strlen(s) + size)))
		return (0);
	if (mod == 0)
		tmp = ft_strcpy(tmp, s);
	else
	{
		while (s[i])
		{
			tmp[i + size] = s[i];
			i++;
		}
	}
	ft_strdel(&s);
	return (tmp);
}
