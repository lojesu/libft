/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roster <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:55:39 by roster            #+#    #+#             */
/*   Updated: 2019/12/06 14:07:46 by lojesu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_swap(void *a, void *b, size_t size)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * size)))
		return ;
	ft_memcpy(tmp, b, size);
	ft_memcpy(b, a, size);
	ft_memcpy(a, tmp, size);
	free(tmp);
}
